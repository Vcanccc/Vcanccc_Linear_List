#include "Linear_List.h"

void Linear_List::ListInit(MyList L)
{
	L.length = 0;
}

int Linear_List::ListLength(MyList L, int i)
{
	L.length = i;
	return L.length;
}

int Linear_List::ListGet(MyList L, int i)
{
	if ((i > 1)&&(i < L.length))
	{
		return L.data[i - 1];
	}
	else
	{
		printf("overflow error");
		return -1;
	}
}

int Linear_List::ListLocate(MyList L, int i)
{
	int j = 1;
	while (j <= L.length)
	{
		if (i != L.data[j - 1])
		{
			j++;
		}
		else
		{
			break;
		}
	}
	return j;
}

