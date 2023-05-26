#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* solution(int start, int end){
	int size = start-end+1;
	int * answer = (int*)malloc(size*sizeof(int));
	for(int i = 0; i<(size); i++){
		answer[i] = start-i;
	}
	return answer;
}

int main(void){
	int* answer = solution(10,3);
	for(int i = 0; i < 8 ; i++){
		printf("%d\n", answer[i]);
	}
}
