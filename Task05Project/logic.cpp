#include "logic.h"

bool is_digits_count_even(long long n){
	n = n < 0 ? -n : n;

	if (n == 0) {
		return false;
	}

	int m = 0;

	while (n > 0) {
		
		n % 10;
		n /= 10;
		m++;
		
	}
	if (m % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}