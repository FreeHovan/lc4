#include <stdio.h>
#include "Header.h"

void sortStackArray(int* arr, int n)
{
	printf(" �� %d \n", n);
	readArray(arr, n);
	writeArray(arr, n);
	Sort(arr, n);
	writeArray(arr, n);
}
