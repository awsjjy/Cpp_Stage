// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
/*程序主要实验了
1、函数（参数为指针）的用法
2、->的用法
3、内存分配问题*/

#include "stdafx.h"
#include <iostream>
using namespace std;
typedef struct
{
	int yuwen;
	int shuxue;
	int waiyu;
}fenshu;
typedef struct
{
	int number;
	char name[30];
	fenshu* score;
}Stu;
int summ(Stu*, Stu*);
int main()
{
	Stu student1, student2;
	Stu* p1 = NULL;
	Stu* p2 = NULL;
	p1 = &student1;
	p2 = &student2;
	p1->score=NULL;
	p1->score = (fenshu *)malloc(sizeof(fenshu));//分配内存
	p2->score = (fenshu *)malloc(sizeof(fenshu));
	p1->score->yuwen = 100;
	p2->score->yuwen = 100;
	cout << summ(p1,p2);
	//cout << summ(p1,p2);
    return 0;
}

int summ(Stu* p1, Stu* p2)
{
	return p1->score->yuwen + p2->score->yuwen;
}
