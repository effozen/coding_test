#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* solution(int n){
    int count = n%2?n/2+1:n/2;
    int* answer = (int*)malloc(count*sizeof(int));
    for(int i = 0; i<count; i++){
        answer[i] = i*2+1;
    }
    return answer;
}

int main(void){
	int* answer = solution(10);
	for(int i = 0; i<5;i++){
		printf("%d ", answer[i]);
	}
	return 0;
}
