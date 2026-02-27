int gcd(int a, int b) {
	a = abs(a);
    b = abs(b);
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
