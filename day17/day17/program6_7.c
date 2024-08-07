#include<stdio.h>

extern int i, j;
extern void sum() {}
void main() {
	printf("정수 입력: ");
	scanf("%d", &i);
	printf("정수 입력: ");
	scanf("%d", &j);

	sum();
	printf("프로그램 종료\n");
	
}
