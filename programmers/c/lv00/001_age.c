#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int age)
{
	int answer = 2022 - age + 1;
	return answer;
}

int main(int argc, char* argv[])
{
	printf("%d 살은 %d년 생입니다.", atoi(argv[1]), solution(atoi(argv[1])));
}
