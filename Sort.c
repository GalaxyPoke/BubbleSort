#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

#include <stdio.h>
#include <stdlib.h>

// 插入排序
/*直接插入排序*/
void InsertSort(int* a, int n)
{
	//不可以< n，否则最后的位置落在n-1，tmp访问end[n]会造成越界
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];		//将end后的位置先行保存起来
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];		//比待插值来得大的均往后移动
				end--;		//end前移
			}
			else
			{
				break;		//若是发现有相同的或者小于带插值的元素，则停下，跳出循环
			}
		}
		a[end + 1] = tmp;		//将end + 1的位置放入保存的tmp值
	}

}

//冒泡排序
void BubbleSort(int* arr, int n)
{
	int end = n;
	while (end)
	{
		int flag = 0;
		for (int i = 1; i < end; ++i)
		{
			if (arr[i - 1] > arr[i])
			{
				int tem = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = tem;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		--end;
	}
}
