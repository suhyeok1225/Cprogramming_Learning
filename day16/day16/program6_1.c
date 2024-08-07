#include<stdio.h>
int avg(int i, int j);

void main() {
	int a, b, c;
	printf("첫번째 값:");
	scanf("%d", &a);
	printf("두번째 값:");
	scanf("%d", &b);

	c = avg(a, b);
	printf("%d와 %d의 평균값은 %d 입니다.\n", a, b, c);


}
int  avg(int i, int j) {
	int k;
	k = (i + j) / 2;
	return k;
}
