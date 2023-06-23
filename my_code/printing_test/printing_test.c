#include<stdioh>
#define LN(n) l ## n // 배열 이름 동적으로 생성


// 하노이탑을 그래픽으로 구현
int print_hanoii(){
	char *test;
	
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
}

int test_printing(){
	char * test1 = "|AAA|";
	char * test2 = "|BBB|";
	char * test3 = "|CCC|";
	
	char * line1;
	char * line2;
	char * line3;
	sprintf(line1, "%s%s%s\n", test1, test2, test3);
}


int main(void){
	
	test_printing();
	return 0;
}
