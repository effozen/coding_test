#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int n){
	// 최소 공배수 찾는 문제
	// 6 = 2 * 3
	// 경우의 수는 3가지로 구분이 된다.
	// 2로 나눠지는 경우
	// 3으로 나눠지는 경우
	// 6으로 나눠지는 경우
	int answer = 0;
	if ((n%6) == 0)
		answer = n;
	else if ((n%2) == 0)
		answer = n * 3;
	else if ((n%3) == 0)
		answer = n * 2;
	else
		answer = n * 6;
	return answer/6;
}

int main(void){
	return 0;
}
