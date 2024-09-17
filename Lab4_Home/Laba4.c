#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
void task1();
void task2();
void task3();
void task4();

int main()
{
	setlocale(LC_ALL, "RUS");

	void task1();
}
void task1()
{
	double a, b;
	int a2;
	printf("¬ведите число с дробной частью:\n");
	scanf("%lg", &a);
	printf("÷ела€ часть = %0lg\n", a);
	a2 = a;
	b = a - a2;
	printf("ƒробна€ часть = %g", b);
	void task2();
}
void task2()
{
	char c;
	printf("¬ведите символ:\n");
	scanf("%c", &c);
	printf("—имвол в 10-й системе счислени€: %i\n", c);
	printf("—имвол в 16-й системе счислени€ : %x", c);
	void task3();
}
void task3()
{
	float i;
	printf("¬ведите число:\n");
	scanf("%f", &i);
	printf("Ёто число в виде 1 / i: %.5f", 1 / i);
	void task4();
}
void task4()
{
	int a = 11, b = 3, x;
	float y;
	double z;
	x = (int)a / (int)b;
	y = (float)a / (float)b;
	z = (double)a / (double)b;
	printf("x = %i\ny= = %g\nz = %le", x, y, z);
}