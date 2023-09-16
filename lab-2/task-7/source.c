#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("≈жемес€чный доход с вклада в банке\n");
	float percent;
	float deposit;

	printf("¬ведите процент годовых:");
	scanf_s("%f", &percent);

	printf("¬ведите сумму вклада:");
	scanf_s("%f", &deposit);

	float profit = (deposit * (1 + percent / 100) - deposit) / 12;
	printf("≈жемесечный доход = %f", profit);


	
}