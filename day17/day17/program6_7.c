#include<stdio.h>

extern int i, j;
extern void sum() {}
void main() {
	printf("���� �Է�: ");
	scanf("%d", &i);
	printf("���� �Է�: ");
	scanf("%d", &j);

	sum();
	printf("���α׷� ����\n");
	
}
