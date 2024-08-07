#include<stdio.h>
void main() {
	//변수의 생성: 자료형 변수명
	int a = 20, b = 10, c;
	//변수에 값저장: 변수명=값
	c = a + b;
	printf("%d+%d=%d\n",a,b,c);

	c = a - b;
	printf("%d-%d=%c\n", a, b, c);

	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);
}
