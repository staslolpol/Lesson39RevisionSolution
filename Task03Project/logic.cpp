#include "logic.h"

bool is_power_of_two(double number){

	if (number < 0) {
		return false;
	}

	if (number == 1) {
		return true;
	}

	while (number >= 1) {
		number /= 2;
		if (number == 1) {
			return true;
		}

		
	}
	

	return false;
}