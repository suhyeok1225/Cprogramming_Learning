#include<stdio.h>
#include<string.h>
void main() {
	char country[10] = "korea";
	char nation[10];

	strcpy(nation, country);
	printf("country:%s,nation:%d\n", country, nation);
}
