#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    int left, right, top, bottom;
    left = max(A, E);
    right = max(min(C, G), left);
    bottom = max(B, F);
    top = max(min(D, H), bottom);
    
    return (C - A) * (D - B) + (G - E) * (H - F) - (right - left) * (top - bottom);
}
