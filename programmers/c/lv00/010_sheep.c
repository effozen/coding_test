#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

enum price{
	sheep = 12000,
	juice = 2000
};

int solution(int n, int k){
	int count = n / 10;
	int answer = sheep * n + juice * (k-count);
	return answer;
}

int main(int argc, char* argv[]){
	int n = atoi(argv[1]);
	int k = atoi(argv[2]);

	printf("%d", solution(n,k));

	return 0;
}
