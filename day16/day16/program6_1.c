#include<stdio.h>
int avg(int i, int j);

void main() {
	int a, b, c;
	printf("ù��° ��:");
	scanf("%d", &a);
	printf("�ι�° ��:");
	scanf("%d", &b);

	c = avg(a, b);
	printf("%d�� %d�� ��հ��� %d �Դϴ�.\n", a, b, c);


}
int  avg(int i, int j) {
	int k;
	k = (i + j) / 2;
	return k;
}
