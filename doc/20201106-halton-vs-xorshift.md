# Halton vs Xorshift

[Halton sequence](http://en.wikipedia.org/wiki/Halton_sequence) and [Xorshift](http://en.wikipedia.org/wiki/Xorshift) methods. Accurate implementation of the `Halton sequence` have to be based on prime numbers. I don't but it works and produce better results than simple `Xorshift` method does. It might seems that HS is a little bit slower than `Xorshift`. It is true. But visual part anyway wins and you have to think that `Halton` is faster and more accurate than `Xorshift`.

Each of images have been exposed for 60 seconds. I implemented [anti-buddhabrot](https://github.com/nikvoronin/BuddhabrotCL) drawing method. It is not so important but this one is more intuitive. Just compare next two images.

## Xorshift

![Xorshift](https://4.bp.blogspot.com/-HdVrpVXF5yM/VETdhahkjWI/AAAAAAAABM0/nFmRPUii72Q/s1600/xorshift-60s-i2000.jpg)

```cpp
__kernel void xorshift(
    uint s1, // seed(base) 1
    uint s2, // seed(base) 2
    const int bufferSize,
    __global float2* rngBuffer)
{
    uint st;

    for(int i = 0; i < bufferSize; i++) {
        st = s1 ^ (s1 << 11);
        s1 = s2;
        s2 = s2 ^ (s2 >> 19) ^ ( st ^ (st >> 18));
        rngBuffer[i] = (float2)((float)st / UINT_MAX, (float)s1 / UINT_MAX);
    }
}
```

<script src="https://gist.github.com/nikvoronin/918cfb976d9512ee046cd2d12df2ed38.js?file=gist.md"></script>

## Halton Sequence

![Halton](https://3.bp.blogspot.com/-XGO59KHbgLw/VETdhfyJuUI/AAAAAAAABMw/hTncPwOx59o/s1600/halton-60s-i2000.jpg)

```cpp
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
```
