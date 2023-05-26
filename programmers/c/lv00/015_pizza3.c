#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int solution(int slice, int n){
	int answer = 1; // 피자의 수
	int mul = answer*slice;
	for(; mul<n;){
		answer++;
		mul = answer*slice;
	}
	return answer;
}

int main(void){
	printf("%d", solution(4, 12));
	return 0;
}
