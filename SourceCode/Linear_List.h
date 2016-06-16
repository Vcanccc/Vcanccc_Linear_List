#pragma once
#ifndef _LINEAR_LIST_
#define _LINEAR_LIST_

#define MAXSIZE		10

#include <stdio.h>

struct node
{
	int data[MAXSIZE];		//存放线性表数组
	int length;    //线性表长度
};

typedef struct node MyList;

struct Linear_List
{
	void ListInit(MyList L);
	int ListLength(MyList L, int i);
	int ListGet(MyList L, int i);
	int ListLocate(MyList L, int i);  //定位函数,i是数据
	int ListPrior(MyList L, int i);   //求前驱



};



#endif
