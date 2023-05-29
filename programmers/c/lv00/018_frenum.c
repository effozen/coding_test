#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct _Number{
	int num, // 숫자
	int count // 등장 빈
}Number;

int solution(int array[], size_t array_len){
	int answer = 0;
	int i, j;
	Number* bank = (Number*)malloc(array_len*sizeof(Number)); // 최빈값 계산을 위한 변수
	int max = 0; // 최빈값

	// 중복값 제거 및 갯수 세기
	for(i = 0; i < array_len; i++){
		// bank 배열 안에 이미 등록된 값인지 체크
		for(j = 0; j < array_len; j++){
			if(array[i]==bank[j]){
				
			}
		}
	}

	return answer;
}

int main(void){
	return 0;
}
