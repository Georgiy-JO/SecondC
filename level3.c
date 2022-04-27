#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//====== ������� 3 ======
//��������� ������� (alpha*A*B + beta*C) � �������� � � C
//����� A �- ������� ������� m �� k, B �- ������� ������� k �� n,
// C �- ������� ������� m �� n
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