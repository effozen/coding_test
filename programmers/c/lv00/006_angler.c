#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

enum angler{
	acute = 1, // 예각
	right = 2, // 직각
	obtuse = 3, // 둔각
	straight = 4 // 평각
};

int solution(int angle){
    if(angle > 0 && angle < 90)
		return acute;
	else if(angle == 90)
		return right;
	else if(angle > 90 && angle < 180)
		return obtuse;
	else if(angle == 180)
		return straight;
	else
		return 0; // 오류
}

int main(int argc, char* argv[]){
	int result = solution(atoi(argv[1]));
	printf("%d\n", result);
	return 0;
}
