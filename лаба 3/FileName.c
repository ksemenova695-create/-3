#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <math.h>


void task1()
{
	int num, num2;
	puts("Введите число:");
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	puts("Введите второе число");
	scanf_s("%d", &num2);
	printf("Введено число %d\n", num2);
	printf("Сумма: %d\n", num2 + num);
	printf("Разность (второе - первое): %d\n", num2 - num);
	printf("Произведение: %d\n", num2 * num);
	printf("Частное (второе / первое): %d\n", num2 / num);
	printf("Остаток от деления (второе % первое): %d\n", num2 % num);
}


void task2()
{
#define     D      2.54
#define     I     2.32
#define     S     3.90
	int dym;
	float result;
	puts("Введите значение:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf(" % d дюймов – это %.2f см\n ", dym, result);
	printf(" % d испанских дюймов – это %.2f см\n", dym, I * dym);
	printf(" % d старолитовских дюймов – это %.2f см\n ", dym, S * dym);
}


void task3()
{
	float a, b;
	puts("Введите числа a и b:");
	scanf_s("%f %f", &a, &b);
	puts("_____________________");
	printf("| a * b | a+b | a-b |\n");
	puts("---------------------");
	printf("| %.5f * %.5f | %.5f+%.5f |%.5f- %.5f |\n", a, b, a, b, a, b);
	puts("---------------------");
	printf("| %-5.5f| %-4.5f| %-5.5f|\n", a * b, a + b, a - b);
}
void taskdz_28()
{
	double a, b, h, c, P, area;

	printf("\nРасчет периметра и площади равнобедренной трапеции\n");
	printf("Введите основания a и b и высоту h: ");
	scanf_s("%lf %lf %lf", &a, &b, &h);

	c = sqrt(h * h + (a - b) * (a - b) / 4);
	P = a + b + 2 * c;
	area = (a + b) * h / 2;

	printf("Периметр = %.2f\n", P);
	printf("Площадь = %.2f\n", area);
}