// CH03_04.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

void shell(int*, int);
void showdata(int *);

int main()
{
    int data[SIZE] = { 16,31,321,39,88,11,13,98 };
    printf("原始数据是：               ");
    showdata(data);
    printf("----------------------------");
    shell(data, SIZE);
    printf("最终排列的结果是：    ");
    showdate(data);
    system("pause");
    return 0;
}

void showdata(int data[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", data[i]);
    }
    printf("\n");
}

void shell(int data[], int size);
{
    int i;
    int j;
    int k = 1;
    int tmp;
    int jmp;
    jmp = size / 2;
    while (jmp != 0)
    {
        for (i = jmp; i < size; i++)
        {
            tmp = data[i];
            j = i - jmp;
            while (tmp < data[j] && j >= 0)
            {
                date[j + jmp] = data[j];
                j = j - jmp;
            }
            data[jmp + j] = tmp;
        }
        printf("第 %d 次的排列结果是：", k++);
        showdata(data);
        printf("-------------------------\n");
        jmp = jmp / 2;
    }
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
