#include<stdio.h>
#define CHARGE 2000

void main() {
	int time, rate;
	printf("��� �ð��� �Է�: ");
	scanf("%d", &time);
	rate = time * CHARGE;
	printf("��� ����� %d �� �Դϴ�.", rate);
}