// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
	return 25;
}
