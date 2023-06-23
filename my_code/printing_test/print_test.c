#include<stdio.h>

int main(void){
    char *king = "king";
    char *cp = king;
    char *test = "65" "<" "30";
    printf("%s\n", test);
    printf("%s\n", cp);
    return 0;
}