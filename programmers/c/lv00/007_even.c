#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int solution(int n){
	int answer = 0;
	for(; n>0; n--)
		answer += (n % 2) == 0 ? n : 0;
	return answer;
}

int main(int argc, char* argv[]){
	int input = atoi(argv[1]);
	int answer = solution(input);
	printf("%d\n", answer);
	return 0;
}
