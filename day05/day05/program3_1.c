#include<stdio.h>
void main() {
	//������ ����: �ڷ��� ������
	int a = 20, b = 10, c;
	//������ ������: ������=��
	c = a + b;
	printf("%d+%d=%d\n",a,b,c);

	c = a - b;
	printf("%d-%d=%c\n", a, b, c);

	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);
}
