#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int solution(int n){
	int answer = 0;
	for (int i=2; i<=n; i+=2){
		answer += i;
	}
	return answer;
}

int main(int argc, char* argv[]){
	int input = atoi(argv[1]);
	int answer = solution(input);
	printf("%d\n", answer);
	return 0;
}
