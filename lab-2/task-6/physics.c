#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Формула плотности вещества\n"); // p = m/v

	float mass;
	float volume;

	printf("Введите массу в кг:");
	scanf_s("%f", &mass);

	printf("Введите объем в м3:");
	scanf_s("%f", &volume);

	float density = mass / volume;
	printf("Плотность вещества равна =%f кг/м3", density);







	


}
