#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//====== уровень 1 ======

//скопировать вектор из X в Y
void dcopy(int n, const double* X, double* Y)
{
	for (int i = 0; i < n; i++)
	{
		Y[i] = X[i];
	}
	return 0;
}
//обмен€ть местами содержимое векторов X и Y
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
//домножить вектор X на коэффициент alpha
void dscal(int n, double alpha, double* X)
{
	for (int i = 0; i < n; i++)
	{
		X[i] *= alpha;
	}
	return 0;
}
//прибавить к вектору Y вектор X, умноженный на коэффициент alpha
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
//вычислить скал€рное произведение векторов X и Y
double ddot(int n, const double* X, const double* Y) 
{
	double temp=0;
	for (int i = 0; i < n; i++)
	{
		temp = temp + X[i] * Y[i];
	}
	return temp;
}