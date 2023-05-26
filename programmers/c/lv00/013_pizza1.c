#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int solution(int n){
	int answer = (n%7)==0?n/7:n/7+1;
	return answer;
}

int main(void){
	printf("%d", solution(15));
	return 0;
}
