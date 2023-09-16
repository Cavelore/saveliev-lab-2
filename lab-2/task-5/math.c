#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a;
	float b;

	printf("Площадь прямоугольного треугольника\n");

	printf("Введите 'a':");
	scanf_s("%f", &a);

	printf("Введите 'b':");
	scanf_s("%f", &b);

	float s = a * b / 2;
	printf("Площадь прямоугольного треугольника со сторонами a = %f, b = %f равна %f", a, b, s);

}
