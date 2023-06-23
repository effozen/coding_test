#include<stdio.h>
#define TEST(a) x ## a
#define PRINT(a) printf("%s\n", test ## a)

int main(void){
	char test1[5] = "test";
	char test2[6] = "test2";
	char test3[6] = "test3";

    int TEST(1) = 0;

    printf("%d\n", TEST(1));

    int i = 3;
    //printf("%s\n", TEST(i));
    PRINT(3);
    return 0;
}