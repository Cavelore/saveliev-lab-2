#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("������� ��������� ��������\n"); // p = m/v

	float mass;
	float volume;

	printf("������� ����� � ��:");
	scanf_s("%f", &mass);

	printf("������� ����� � �3:");
	scanf_s("%f", &volume);

	float density = mass / volume;
	printf("��������� �������� ����� =%f ��/�3", density);







	


}
