#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;



int j;

void createMatrix(int*a, int row, int coll)
{
	srand(time(NULL));
	for (int i = 0; i < row; i++)
	{
		for (j = 0; j < coll; j++)
		{
			*(a + i*coll + j)=1+rand() %100;
		}
	}
}

void printMatrix(int*a, int row, int coll)
{
	for (int i = 0; i < row; i++)
	{
		for (j = 0; j < coll; j++)
		{
			printf("%d\t", *(a + i*coll + j));
		}
		printf("\n");
	}
}

void print_arr(int *arr, int r)
{
	for (int i = 0; i < r; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}