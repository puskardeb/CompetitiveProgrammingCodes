uint32_t reverseBits(uint32_t n) {
    uint32_t res = 1;
    uint32_t sum = 0;

    for (int i = 31; i >= 0; --i, res = res * 2) {
        if (n & (1U << i)) {
            // printf("%uth bit is set\nres : %u\n", i, res);
            sum += res;
        }
    }
    return sum;
}
