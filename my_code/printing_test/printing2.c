#include <stdio.h>

// [0] == blank, [1] == disk1, [2]~[4] == disk2, [5]~[9] == disk3
char disk[10][10] = {
    "         ",
    "   |disk|",
    "+-------+",
    "| disk2 |",
    "+-------+",
    "+-------+",
    "|       |",
    "| disk3 |",
    "|       |",
    "+-------+"};

const char bar[31] = "a--------|b--------|c--------|";

void print_line(int la[], int lb[], int lc[])
{
    int i;
    // 0을 출력해야 하는 횟수
    int zero[3] = {9,};

    // 남은 출력 횟수
    int rest[3] ={9,};
    
    for(i = 0; i<3; i++){
        rest[0] += la[i];
        rest[1] += lb[i];
        rest[2] += lc[i];
    }

    for(i = 0; i<3; i++){
        zero[i] -= rest[i];
    }

    char (*a)[10] = disk[0];
    char (*b)[10];
    char (*c)[10];

    for(i = 0; i<9; i++){
        if(zero[0]>0){
            zero[0]--;
            a = disk[0];
        }
        if(zero[1]>0){
            zero[1]--;
            b = disk[0];
        }
        if(zero[2]>0){
            zero[2]--;
            c = disk[0];
        }
        if(zero[0]==0){
            if(rest[0]==9){
                
            }
        }

        printf("%-10s%-10s%-10s\n", a, b, c);
    }

    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[0]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[0]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[0]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[0]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[9]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[8]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[4],disk[7]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[3],disk[6]);
    printf("%-10s%-10s%-10s\n", disk[1],disk[2],disk[5]);
    printf("%s\n", bar);


    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[0]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[0]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[0]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[1]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[5]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[0],disk[6]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[2],disk[7]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[3],disk[8]);
    printf("%-10s%-10s%-10s\n", disk[0],disk[4],disk[9]);
    printf("%s\n", bar);

    if(la)
    return;
}

int main(void)
{
    // 0 = blank, 1 = disk1, 3 = disk2, 5 = disk3
    int a[3] = {5, 2, 1};
    int b[3] = {2, 0, 0};
    int c[3] = {1, 0, 0};

    print_line(a, b, c);
    return 0;
}