#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int ingresen()
{
	int n; cout << "ingrese cantidad de terminos: "; cin >> n;
	while (n <10 || n > 30)
	{
		cout << "ingrese n: "; cin >> n;
	}
	return n;
}


float ingresedatox()
{
	float x; cout << "ingrese el valor de x : "; cin >> x;
	return x;
}

float factorial(int b)
{
	float res = 1;
	int i = 1;
	while (i <= b)//mientrs que
	{
		res = res * i;
		i++;
	}
	return res;
}


float calculapotencia(float b, int e)
{
	float result = 1;
	int i = 1;
	while (i <= e)
	{
		result = result * b;
		i++;
	}
	return result;
}



float sumaserie()
{
	float n, suma = 0;
	float x;

	x = ingresedatox();
	n = ingresen();
	for (int k = 0; k <= n; k++)
		suma = suma + calculapotencia(-1, k) * (calculapotencia(2, (2 * k-1)) / factorial(2 * k)) * calculapotencia(x, 2 * k);
	return suma;
}



int main()
{
	cout << sumaserie() << " es la suma de terminos";
	_getch();
}