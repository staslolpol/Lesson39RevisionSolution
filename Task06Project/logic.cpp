#include "logic.h"

long long get_fibo_number(int n) {
	int result;

	if (n < 0) {
		return -1;
	}

	int number1 = 0;
	int number2 = 1;
	int number3;

	for (int i = 1; i < n; i++) {


		number3 = number1 + number2;
		number1 = number2;
		number2 = number3;
	}
	return number2;
}