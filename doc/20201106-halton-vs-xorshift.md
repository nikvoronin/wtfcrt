# Halton vs Xorshift

[Halton sequence](http://en.wikipedia.org/wiki/Halton_sequence) and [Xorshift](http://en.wikipedia.org/wiki/Xorshift) methods. Accurate implementation of the `Halton sequence` have to be based on prime numbers. I don't but it works and produce better results than simple `Xorshift` method does. It might seems that HS is a little bit slower than `Xorshift`. It is true. But visual part anyway wins and you have to think that `Halton` is faster and more accurate than `Xorshift`.

Each of images have been exposed for 60 seconds. I implemented [anti-buddhabrot](https://github.com/nikvoronin/BuddhabrotCL) drawing method. It is not so important but this one is more intuitive. Just compare next two images.

## Xorshift

![Xorshift](https://4.bp.blogspot.com/-HdVrpVXF5yM/VETdhahkjWI/AAAAAAAABM0/nFmRPUii72Q/s1600/xorshift-60s-i2000.jpg)

<% gist 918cfb976d9512ee046cd2d12df2ed38 gist.md %>

<script src="https://gist.github.com/nikvoronin/918cfb976d9512ee046cd2d12df2ed38.js?file=gist.md"></script>

## Halton Sequence

![Halton](https://3.bp.blogspot.com/-XGO59KHbgLw/VETdhfyJuUI/AAAAAAAABMw/hTncPwOx59o/s1600/halton-60s-i2000.jpg)

<script src="https://gist.github.com/nikvoronin/0e4cb51dfdf65ea46d120b73aee899ab.js"></script>
