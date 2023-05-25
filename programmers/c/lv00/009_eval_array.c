#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

double solution (int numbers[], size_t numbers_len){
	double answer = 0;
	for (int i = 0; i<numbers_len; i++){
		answer += numbers[i];
	}
	answer = answer / numbers_len;
	return answer;
}

int main(void)
{
	int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("answer : %lf", solution(numbers, 10));
	return 0;
}
