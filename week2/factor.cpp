#include <bits/stdc++.h>
using namespace std;

int n;


int main() {

	cin >> n;
	/*
		problem: factorize n
		find n = p1^a1 * ... * pk^ak
	*/

	int x = n;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			/* i is prime */

			/*
				do following:
				extract all i's from x
				for example:
				x = 24, i = 2
				24/2 = 12, a++
				12/2 = 6, a++
				6/2 = 3, a++
				x ==> 3
				add 2^3 to answer
				(or generally add x^a)
				and continue
			*/
		}
	}
	if (x > 1) {
		// understand that x must be a prime
		// add (x^1) to answer
	}
	/* output answer */
	

	return 0;
}