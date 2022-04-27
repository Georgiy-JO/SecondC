#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//====== уровень 3 ======
//вычислить матрицу (alpha*A*B + beta*C) и записать еЄ в C
//здесь A Ц- матрица размера m на k, B Ц- матрица размера k на n,
// C Ц- матрица размера m на n
void dgemm(
	int m, int n, int k,
	double alpha, const double* A, const double* B,
	double beta, double* C
)
{
	double temp;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp = 0;
			for (int z = 0; z < k; z++)
			{
				temp = temp + A[i * k + z] * B[z * n + j];
			}
			temp *= alpha;
			C[i * n + j] = C[i * n + j] * beta + temp;
		}
	}
}