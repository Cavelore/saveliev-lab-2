#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a;
	float b;

	printf("������� �������������� ������������\n");

	printf("������� 'a':");
	scanf_s("%f", &a);

	printf("������� 'b':");
	scanf_s("%f", &b);

	float s = a * b / 2;
	printf("������� �������������� ������������ �� ��������� a = %f, b = %f ����� %f", a, b, s);

}
