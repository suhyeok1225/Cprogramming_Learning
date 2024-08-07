#include<stdio.h>

void sum1() {
	int x, y;
	printf("수1:");
	scanf("%d", &x);
	printf("수2:");
	scanf("%d", &y);

	printf("x+y=%d\n", x + y);
}
void f1(int x) {
	printf("%d", x);
}
void sum2(int x, int y) {
	printf("x+y=%d\n", x + y);
}
int f2() {
	printf("f2() 실행중~\n");
	return 100;
}
int sum3(int x, int y) {
	int result = x + y;
	return result;
}
void main() {
	printf("%d", sum3(10,20));
}