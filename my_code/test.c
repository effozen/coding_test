#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num = 10;
	char buf[10] = {0,};
	char * pstr = itoa(num, buf, 10); 

	printf("10을 10진법에 기반한 문자열로 변환 : %s\n", pstr);
	
	pstr = itoa(num, buf, 2);
	printf("10을 2진법에 기반한 문자열로 변환 : %s\n", pstr);

	return 0;
}
