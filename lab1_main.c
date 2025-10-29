#include "bit_operations.h"
#include <stdint.h>
#include <stdio.h>

int main () {
	uint8_t x=15;
	uint8_t mask=1;
	uint8_t result =logical_shift_left_8(x,mask);
	return 1;
}