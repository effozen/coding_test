#include <stdio.h>

const char disk1[1][7] = {
    "|disk|",
};
const char disk2[3][10] = {
    "---------",
    "| disk2 |",
    "---------"};
const char disk3[5][10] = {
    "---------",
    "|       |",
    "| disk3 |",
    "|       |",
    "---------"};

// [0] == blank, [1] == disk1, [2]~[4] == disk2, [5]~[9] == disk3
const char disk[10][10] = {
    "         ",
    "   |disk|",
    "---------",
    "| disk2 |",
    "---------",
    "---------",
    "|       |",
    "| disk3 |",
    "|       |",
    "---------"};

const char bar[31] = "a--------|b--------|c--------|";

void print_line(int a[], int b[], int c[])
{
    int len = 3;
    int i, j, k;
    // for(i=0; i<9; i++){
    //     printf("%-10s\n", disk[i]);
    // }
    // for(i=0, j=1, k=4;;)
    //     printf("%s%s%s\n",disk[i],disk[j],disk[k]);
    //     if(i==0)

    // 배열 하나에 대해서만 먼저 구현
    int s_a = 0;
    int e_a = 0;
    int s_b = 0;
    int e_b = 0;
    int s_c = 0;
    int e_c = 0;
    if (a[0] == 0)
    {
        s_a = 0;
        e_a = 0;
        for (i = 0; i < 9; i++)
        {
            printf("%-10s\n", disk[0]);
        }
    }
    else if (a[0] == 1)
    {
        s_a = 1;
        e_a = 1;
        printf("%-10s\n", disk[1]);
        for (i = 0; i < 8; i++)
        {
            printf("%-10s\n", disk[0]);
        }
    }
    else if (a[0] == 2)
    {
        s_a = 2;
        e_a = 4;
        for (i = 2; i < 5; i++)
        {
            printf("%-10s\n", disk[i]);
        }
        if (a[1] == 1)
        {
            s_b = 5;
            e_b = 9;
            for (i = 5; i < 10; i++)
            {
                printf("%-10s\n", disk[i]);
            }
            printf("%-10s\n", disk[0]);
        }
        else
        {
            for (i = 0; i < 6; i++)
            {
                printf("%-10s\n", disk[0]);
            }
        }
    }
    else if (a[0] == 3)
    {
        s_a = 5;
        e_a = 9;
        for (i = 5; i < 10; i++)
        {
            printf("%-10s\n", disk[i]);
        }
        if (a[1] == 2)
        {
            s_b = 2;
            e_b = 4;
            for (i = 2; i < 5; i++)
            {
                printf("%-10s\n", disk[i]);
            }
            if (a[2] == 1)
            {
                s_c = 1;
                e_c = 1;
            }
        }
    }
    printf("%s\n", bar);
    return;
}

int main(void)
{
    // 0 = blank, 1 = disk1, 2 = disk2, 3 = disk3
    int a[3] = {3, 2, 1};
    int b[3] = {2, 0, 0};
    int c[3] = {1, 0, 0};

    print_line(a, b, c);
    return 0;
}