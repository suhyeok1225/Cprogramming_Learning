#include<stdio.h>
void main() {
	char name1[] = "kim";
	char name2[] = "park";
	char name[2][10] = { "kim","park" };
	printf("첫번째 이름: %s\n", name[0]);
	printf("두번째 이름: %s\n", name[1]);
}