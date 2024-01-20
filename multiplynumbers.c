
#include "dataset.h"
#include <stddef.h>

// NxN matrices 
void multiply(const data_t A, const data_t B, data_t *C)
{
  *C = A*B;
}


#pragma GCC push_options
#pragma GCC optimize ("O0")


void main()
{
	data_t C = 0;
	multiply(NUM_A, NUM_B, &C);
}


#pragma GCC pop_options