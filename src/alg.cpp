int gcd(int a = 25, int b = 10) {
	a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
