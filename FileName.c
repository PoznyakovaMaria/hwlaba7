//������� 20 
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
	setlocale(LC_ALL, "RUS");
	int n;
	puts("������� ����� �� 1 �� 13");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("����\n"); break;
	case 2:
		printf("���\n"); break;
	case 3:
		printf("���\n"); break;
	case 4:
		printf("������\n"); break;
	case 5:
		printf("����\n"); break;
	case 6:
		printf("�����\n"); break;
	case 7:
		printf("����\n"); break;
	case 8:
		printf("������\n"); break;
	case 9:
		printf("������\n"); break;
	case 10:
		printf("������\n"); break;
	case 11:
		printf("�����������\n"); break;
	case 12:
		printf("����������\n"); break;
	case 13:
		printf("����������\n"); break;
	default:
		printf("����� ��� ���������\n");
	}
	return 0;
}