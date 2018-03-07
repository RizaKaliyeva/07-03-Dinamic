#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "Header.h"
using namespace std;

void main()
{

	int nz;
	cout << "Kakoe zadanie?" << endl;
	cin >> nz;

	if (nz == 1)
	{
		/*1.	Дан двумерный массив целых чисел
			a.Сформировать одномерный массив, каждый элемент которого равен сумме четных положительных элементов соответствующего столбца двумерного массива*/
			//int *(m)[6];
		int *m = NULL, *newM = NULL;
		int coll, row, sum = 0;
		printf("Vvedite kol-vo stolbcov: \n");
		scanf("%d", &coll);
		printf("Vvedite kol-vo strok: \n");
		scanf("%d", &row);

		m = (int*)calloc((coll*row), sizeof(int));
		newM = (int*)calloc((coll*row), sizeof(int));
		if (m != NULL&&newM != NULL)
		{
			createMatrix(m, row, coll);
			printMatrix(m, row, coll);

			for (int j = 0; j < coll; j++)
			{
				for (int i = 0; i < row; i++)
				{
					if (*(m + i*coll + i) % 2 == 0 && *(m + i*coll + i) > 0)
						sum += *(m + i*coll + i);
					else
						sum = 0;
				}
				*newM = sum;
				printf("%d \n", *newM);
				sum = 0;
				newM++;
			}

			//print_arr(newM, coll);
		}
		else
		{
			exit(EXIT_FAILURE);
		}

	}
	else if (nz == 2)
	{

	}

}
