__kernel void halton(
    uint base1,
    uint base2,
    const int bufferSize,
    __global float2* rngBuffer)
{
    uint mBase2 = base1;
    uint mBase3 = base2;
    float mX;
    float mY;

    const float oneOverThree = 1.0f / 3.0f;

    for(int i = 0; i < bufferSize; i++) {
        uint oldBase2 = mBase2;
        mBase2++;
        uint diff = mBase2 ^ oldBase2;

        float s = 0.5f;

        do {
            if (oldBase2 & 1)
                mX -= s;
            else
                mX += s;
        
            s *= 0.5f;
        
            diff = diff >> 1;
            oldBase2 = oldBase2 >> 1;
        }
        while (diff);

        uint mask = 0x03;
        uint add  = 0x01;
        s = oneOverThree;

        mBase3++;

        while(1) {
            if ((mBase3 & mask) == mask) {
                mBase3 += add;
                mY -= 2 * s;
            
                mask = mask << 2;
                add  = add  << 2;
            
                s *=  oneOverThree;
            }
            else {
                mY += s;
                break;
            }
        };

        rngBuffer[i] = (float2)(mX, mY);
    }
}