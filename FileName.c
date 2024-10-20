//вариант 20 
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
	setlocale(LC_ALL, "RUS");
	int n;
	puts("Введите число от 1 до 13");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("Один\n"); break;
	case 2:
		printf("Два\n"); break;
	case 3:
		printf("Три\n"); break;
	case 4:
		printf("Четыре\n"); break;
	case 5:
		printf("Пять\n"); break;
	case 6:
		printf("Шесть\n"); break;
	case 7:
		printf("Семь\n"); break;
	case 8:
		printf("Восемь\n"); break;
	case 9:
		printf("Девять\n"); break;
	case 10:
		printf("Десять\n"); break;
	case 11:
		printf("Одиннадцать\n"); break;
	case 12:
		printf("Двенадцать\n"); break;
	case 13:
		printf("Тринадцать\n"); break;
	default:
		printf("Число вне диапозона\n");
	}
	return 0;
}