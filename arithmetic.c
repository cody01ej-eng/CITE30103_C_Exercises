#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int x = 0;
	printf("Initial x = %d\n", x);
	printf("Post-increment (x++): %d\n", x++);
	printf("After post-increment, x = %d\n", x);
	x = 0;
	printf("Pre-increment (++x): %d\n", ++x);
	printf("After pre-increment, x = %d\n\n", x);

	x = 0;
	printf("Initial x = %d\n", x);
        printf("Post-decrement (x--): %d\n", x--);
        printf("After post-decrement, x = %d\n", x);
        x = 0;
        printf("Pre-decrement (--x): %d\n", --x);
        printf("After pre-decrement, x = %d\n\n", x);

	int a = 9, b = 5;
	printf("Initial a = %d, b = %d\n", a, b);
	a -= b; printf("a -= b -> %d\n", a);
	a += b; printf("a += b -> %d\n", a);
	a *= b; printf("a *= b -> %d\n", a);
	a /= b; printf("a /= b -> %d\n", a);
	a %= b; printf("a %%= b -> %d\n", a);
	a &= b; printf("a &= b -> %d\n", a);
	a |= b; printf("a |= b -> %d\n", a);
	a ^= b; printf("a ^= b -> %d\n", a);
	a >>= 1; printf("a >>= 1 -> %d\n", a);
	a <<= b; printf("a <<= 1 -> %d\n\n", a);

	bool isLoggedIn = true;
	bool isAdmin = false;
	printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
	printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
	printf("Not logged in: %s\n\n", (!isLoggedIn) ? "true" : "false");

	int p = 1, q = 0, r = 1;
	printf("a && b || c -> %d\n", p && q || r);
	printf("(a && b) || c -> %d\n", (p && q) || r);
	printf("a || b && c -> %d\n", p || q && r);
	printf("(a || b) && c -> %d\n", (p || q) && r);
	printf("!a && b -> %d\n", (!p) && q);

	return 0;
}
