#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int solution(int n){
	int answer = 0;
	int i, lcm;
	int gcd = 0;
	for(i = 1; i <= 6 && i <= n; i++){
		if(6%i==0 && n%i==0)
			gcd = i;
	}
	lcm = (n*6) / gcd;
	answer = lcm/6;
	return answer;
}

int main(void){
	return 0;
}
