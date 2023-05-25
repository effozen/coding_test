#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int* solution(const char* strlist[], size_t strlist_len){
	int* answer = (int*)malloc(strlist_len);
	int count = 0;
	int i;
	for(i = 0; i<strlist_len; i++){
		answer[i] = strlen(strlist[i]);
	}
	return answer;
}

int main(void){
	char* arr[] = {"We", "are", "the", "world!"};
	int* answer = solution(arr,4);
	for(int i = 0; i < 4; i++){
		printf("%d ", answer[i]);
	}
	return 0;
}
