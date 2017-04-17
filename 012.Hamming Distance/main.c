int hammingDistance(int x, int y) {
    int n = x ^ y;
    int distance = 0;
    while (n) {
        distance++;
        n &= n - 1;
    }
    return distance;
}
