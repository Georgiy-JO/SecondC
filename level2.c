#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//====== уровень 2 ======
//вычислить вектор (alpha*A*X + beta*Y) длины m, и записать его в Y
//здесь A Ц- матрица размера m на n, X Ц- вектор длины n, а Y Ц- вектор длины m
void dgemv(
	int m, int n,
	double alpha, const double* A, const double* X,
	double beta, double* Y
)
{
	double temp;
	for (int i = 0; i < m; i++)
	{
		temp = 0;
		for (int j = 0; j < n; j++)
		{
			temp = temp + A[i * n + j] * X[j];
		}
		temp *= alpha;
		Y[i] = beta * Y[i] + temp;
	}
	return 0;
}
//вычислить матрицу (alpha*X*Yt + A) и записать еЄ в A
//здесь Yt Ц- это транспонированный вектор Y, то есть записанный как вектор-строка
// A Ц- матрица размера m на n, X Ц- вектор длины m, а Y Ц- вектор длины n
void dger(
	int m, int n,
	double alpha, const double* X, const double* Y,
	double* A)
{
	double temp;
	for (int i = 0; i < m; i++)
	{
		temp = 0;
		for (int j = 0; j < n; j++)
		{
			temp = alpha * X[i] * Y[j];
			A[i * n + j] += temp;
		}
	}
	return 0;
}