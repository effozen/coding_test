#include<stdio.h>
#include<string.h>


int main(void){
	// UI/UX

	char input[100000];

	printf("입력 해주세요 : ");
	scanf(" %[^\n]s", input);

	char splited[5000];
	char buffer[100000];
	char tmp2[100000];
	char tmp[10];
	unsigned int length;
	char *ptr = strtok(input, " ");
	strcpy(splited,ptr);
	length = strlen(splited);
	if(splited[0] != '<'){
		for(int i = 0; i<length; i++){
			strcpy(tmp,splited[i]);
			strcpy(splited[i],splited[length - i -1]);
			strcpy(splited[length-i-1],tmp);
		}
	}
	if(strlen(splited) != strlen(input))
		strcat(splited, " ");
	strcpy(buffer,splited);

	printf("%s\n",buffer);
	
	//ptr = strtok(NULL, " ");
	//strcpy(splited,ptr);
	//length = strlen(splited);
	//if(splited[0] != '<'){
	//	for(int i = 0; i<length; i++){
	//		tmp = splited[i];
	//		splited[i] = splited[length - i -1];
	//		splited[length-i-1] = tmp;
	//	}
	//}
	//sprintf(buffer, "%s%s ", buffer, splited);

	//printf("%s\n",buffer);

	return 0;
}
