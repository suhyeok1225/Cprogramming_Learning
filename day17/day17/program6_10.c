#include<stdio.h>

int main(int argc, char* argv[]) {
	int i;
	printf("Program name:%d\n", argv[0]);
	if (argc < 2) {
		printf("�ɼ��� �������ּž� �մϴ�.\n");
	}
	else {
		for (i = 1; i < argc; i++) {
			printf("�ɼ�:%s\n", argv[i]);
		}
	}
}