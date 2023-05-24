#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int num1, int num2)
{
	int answer = num1 % num2;
	return answer;
}


int main(int argc, char* argv[])
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);

	printf("답 : %d", solution(n1, n2));
}
