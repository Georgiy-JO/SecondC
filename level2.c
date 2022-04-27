#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//====== ������� 2 ======
//��������� ������ (alpha*A*X + beta*Y) ����� m, � �������� ��� � Y
//����� A �- ������� ������� m �� n, X �- ������ ����� n, � Y �- ������ ����� m
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
//��������� ������� (alpha*X*Yt + A) � �������� � � A
//����� Yt �- ��� ����������������� ������ Y, �� ���� ���������� ��� ������-������
// A �- ������� ������� m �� n, X �- ������ ����� m, � Y �- ������ ����� n
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