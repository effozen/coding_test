#include<stdio.h>

const char disk1[1][7] = {"|disk|",};
const char disk2[3][10] = {
    "---------",
    "| disk2 |",
    "---------"
};
const char disk3[5][10] = {
    "---------",
    "|       |",
    "| disk3 |",
    "|       |",
    "---------"
};

// [0] == disk1, [1]~[3] == disk2, [4]~[8] == disk3, [9] == blank
const char disk[10][10]={
    "         ",
    "   |disk|",
    "---------",
    "| disk2 |",
    "---------",
    "---------",
    "|       |",
    "| disk3 |",
    "|       |",
    "---------"
};

const char bar[31] = "a--------|b--------|c--------|";

void print_line(int a[], int b[], int c[]){
    int len = 3;
    int i, j, k;
    // for(i=0; i<9; i++){
    //     printf("%-10s\n", disk[i]);
    // }
    // for(i=0, j=1, k=4;;)
    //     printf("%s%s%s\n",disk[i],disk[j],disk[k]);
    //     if(i==0)

    // 배열 하나에 대해서만 먼저 구현
    int i_a = 9;
    int i)
    printf("%s\n",bar);
    return;
}

int main(void){
    // 0 = blank, 1 = disk1, 2 = disk2, 3 = disk3
    int a[3] = {3,0,0};
    int b[3] = {2,0,0};
    int c[3] = {1,0,0};

    print_line(a,b,c);
    return 0;
}