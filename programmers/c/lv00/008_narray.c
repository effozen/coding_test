// n개 간격의 원소들
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* solution(int num_list[], size_t num_list_len, int n){
	int i,j;
	int size = (num_list_len % n)==0 ? num_list_len / n : num_list_len / n + 1;
	int* answer = (int*)malloc(sizeof(int)*size);
	for(i=0, j=0; i<num_list_len; i+=n, j++){
		answer[j] = num_list[i];
	}
	return answer;
}

int main(int argc, char* argv[]){
	int arr[6] = {4,2,6,1,7,6};
	int* result = solution(arr, 6, 2);
	for(int i = 0; i < 3; i++)
		printf("%d\n", result[i]);
	return 0;
}
