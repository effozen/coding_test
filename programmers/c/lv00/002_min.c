// 프로그래머스 두 수의 차에 대한 문제
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int num1, int num2)
{
	return num1 - num2;
}

int main(int argc, char* argv[])
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int result = solution(n1, n2);
	printf("num1이 %d이고, num2가 %d이므로 %d - %d = %d를 return합니다.\n", n1, n2, n1, n2,  result);
	return 0;
}
