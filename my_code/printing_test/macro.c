#include<stdio.h>
#define TEST(a, b) test ## a ## _ ## b

int main(void){
	char test1_1[5] = "test";
	char test2[6] = "test2";
	char test3[6] = "test3";
	printf("%s\n", TEST(1,1));

	return 0;
}
