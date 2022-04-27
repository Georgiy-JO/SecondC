#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//====== ������� 1 ======

//����������� ������ �� X � Y
void dcopy(int n, const double* X, double* Y)
{
	for (int i = 0; i < n; i++)
	{
		Y[i] = X[i];
	}
	return 0;
}
//�������� ������� ���������� �������� X � Y
void dswap(int n, double* X, double* Y)
{
	double temp;
	for (int i = 0; i < n; i++)
	{
		temp = Y[i];
		Y[i] = X[i];
		X[i] = temp;
	}
	return 0;
}
//��������� ������ X �� ����������� alpha
void dscal(int n, double alpha, double* X)
{
	for (int i = 0; i < n; i++)
	{
		X[i] *= alpha;
	}
	return 0;
}
//��������� � ������� Y ������ X, ���������� �� ����������� alpha
void daxpy(int n, double alpha, const double* X, double* Y)
{
	double temp;
	for (int i = 0; i < n; i++)
	{
		temp = X[i] * alpha;
		Y[i] += temp;
	}
	return 0;
}
//��������� ��������� ������������ �������� X � Y
double ddot(int n, const double* X, const double* Y) 
{
	double temp=0;
	for (int i = 0; i < n; i++)
	{
		temp = temp + X[i] * Y[i];
	}
	return temp;
}