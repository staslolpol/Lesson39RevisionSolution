#include "logic.h"

bool is_digits_count_even(long long n){
	if (n < 0) {
		return "ERORR 404";
	}

	while (n > 0) {
		int m = 0;
		m = n % 10;
		n /= 10;
		if (m % 2 == 0) {
			return true;
		}
		else {
			return false;
		}
	}
}