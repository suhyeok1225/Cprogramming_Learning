#include<stdio.h>
#define CHARGE 2000

void main() {
	int time, rate;
	printf("사용 시간을 입력: ");
	scanf("%d", &time);
	rate = time * CHARGE;
	printf("사용 요금은 %d 원 입니다.", rate);
}