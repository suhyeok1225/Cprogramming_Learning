#include<stdio.h>

int x = 3;
void f1();
void main() {
	int y = 4;
	printf("x: %d\n", x);
	printf("y: %d\n", y);
	f1();

}
void f1() {
	printf("f1() »£√‚!\n");
	printf("x: %d\n", x);
}
