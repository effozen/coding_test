// CS50 2019 강의 중 알고리즘 설명 편에서 의사코드를 구현한 부분이 있었다.
// 이를 직접 구현해보기 위해서 작성하는 코드이다.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 전화번호부에 기재될 개인정보
typedef struct {
	char* name;
	char* number;
}Info;

int binary_search(Info *book, int length, char* target){
	int min = 0;
	int index=length/2;
	int max = length;
	int standard = 65 + index;

	// 비교는 ASCII를 기준으로 하자.
	while(strcmp(book[index].name,target)){
		if(index/2==0){
			return -1;
		}
		if(atoi((book[index].name)[0])<standard){
			max = index;
			index = index/2;
			standard = 65+index;
		}
		else{
			min = index;
			index = index + index/2;
			standard = 65+index;
		}
	}

	return index;
}

int main(void){
	int volume = 0;
	char name[100];
	int index=0;

	// 전화번호부
	// 문자열의 시작은 A부터 M까지이다.
	// A는 65, M은 77로 총 12개 차이가 난다.
	Info book[12] = {
		{"Andros Agels", "010-0000-0000"},
		{"Beer Bear", "010-0001-0001"},
		{"Cool Cat", "010-0002-0002"},
		{"Dead Dog", "010-0003-0003"},
		{"Egypt Eagle", "010-0004-0004"},
		{"Fool Fox", "010-0005-0005"},
		{"Gold Goose", "010-0006-0006"},
		{"Holy Horse", "010-0007-0007"},
		{"Ill Imp", "010-0008-0008"},
		{"Jump Jump", "010-0009-0009"},
		{"King Koonta", "010-0010-0010"},
		{"Lober Looll", "010-0011-0011"},
		{"Mike Smith", "010-0012-0012"}
	};

	// UI/UX 
	printf("Please input the volume:");
	scanf(" %d", &volume);
	getchar();
	printf("Please input the name what you want to find:");
	scanf(" %s", name);
	
	// 탐색 시작
	index = binary_search(book, 12, name);

	if(index == -1){
		printf("There is no %s\n", name);
	}
	else{
		printf("%s's Number : %s\n", book[index].number, book[index].name);
	}
	

	return 0;
}
