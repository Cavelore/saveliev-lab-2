#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("����������� ����� � ������ � �����\n");
	float percent;
	float deposit;

	printf("������� ������� �������:");
	scanf_s("%f", &percent);

	printf("������� ����� ������:");
	scanf_s("%f", &deposit);

	float profit = (deposit * (1 + percent / 100) - deposit) / 12;
	printf("����������� ����� = %f", profit);


	
}