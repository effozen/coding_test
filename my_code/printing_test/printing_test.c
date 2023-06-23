#include<stdio.h>
#define LN(n) line ## n // 배열 이름 동적으로 생성
#define DISK(a, b) disk_ ## a ## _ ## b
#define TEST(a) test ## a


// 하노이탑을 그래픽으로 구현
int print_hanoii(){
	char *test = "A";
	
	// Hanoii Graphic

	// bar (table)
	char *bar_a = "a-------|";


	// 원판 1 (disk 1)
	char *disk1 = "|disk|";
	
	// 원판 2 (disk 2)
	char *disk2_1 = "---------";
	char *disk2_2 = "| disk2 |";
	char *disk2_3 = "---------";

	// 원판 3 (disk 3)
	char *disk3_1 = "---------";
	char *disk3_2 = "|       |";
	char *disk3_3 = "| disk3 |";
	char *disk3_4 = "|       |";
	char *disk3_5 = "---------";
	return 0;
}

// 수평으로 출력
int test_printing(){
	char * test1 = "|AAA|";
	char * test2 = "|BBB|";
	char * test3 = "|CCC|";
	
	char line1[20];
	char * line2 = "0x00";
	char * line3 = "0x00";
	sprintf(line1, "%s%s%s", test1, test2, test3);
	printf("%s\n",line1);
	return 0;
}

// 수직으로 출력
int test_printing2(){
	
	char test[3][6] = {
		"|AAA|",
		"|BBB|",
		"|CCC|"
	};
	
	printf("%s%s%s",test[0],test[1],test[2]);
	return 0;
}

int main(void){
	
	test_printing();
	test_printing2();
	return 0;
}
