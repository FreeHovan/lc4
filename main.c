#include <locale.h>
#include <stdio.h>
#include "header.h"
#include <stdbool.h>
void main() {
	int arr[N];
	const double x = 5;
	const double y = 8.2537;
	double result = 0;
	_Bool close_flag = true;
	setlocale(LC_CTYPE, "rus");
	while (close_flag) {
		printf("1. Задание 1 \n2. Задание 2 \n3. выход \n");
		switch (getch()) {
		case '1':
			f(&x, &y, &result);
			printf("x = % .4lf\n", x);
			printf("y = % .4lf\n", y);
			printf("f = % .4lf\n", result);
			printf("x=");
			scanf_s("%lf", &x);
			printf("y=");
			scanf_s("%lf", &y);
			f(&x, &y, &result);
			printf("f = % .4lf\n", result);
			break;
		case '2':
			printf("введите массив\n");
			sortStackArray(arr, N);
			break;
		case '3':
			close_flag = 0;
			break;
		}
	}
}
