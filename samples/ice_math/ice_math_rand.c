#define ICE_MATH_IMPL
#include <stdio.h>
#include "ice_math.h"

int main(int argc, char** argv) {
	printf("%f\n\0", ice_math_rand());
	return 0;
}
