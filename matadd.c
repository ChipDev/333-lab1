
#include "dataset.h"
#include <stddef.h>

// NxN matrices 
void matadd(int N,  const data_t A[], const data_t B[], data_t C[])
{
  int i, j, k;
 
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      C[i + j*N] = A[i+j*N]+B[i+j*N];
    }
  }
}
void main()
{
	static data_t results_data[ARRAY_SIZE];
	matadd(DIM_SIZE, input1_data, input2_data, results_data);
}
