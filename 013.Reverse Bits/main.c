uint32_t reverseBits(uint32_t n) {
    uint32_t m = 0;
    int i;
    for (i = 0; i < 32; i++, n = n >> 1) {
        m <<= 1;
        m = (n & 1) | m;
    }
    return m;
}
