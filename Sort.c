#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

#include <stdio.h>
#include <stdlib.h>

// ��������
/*ֱ�Ӳ�������*/
void InsertSort(int* a, int n)
{
	//������< n����������λ������n-1��tmp����end[n]�����Խ��
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];		//��end���λ�����б�������
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];		//�ȴ���ֵ���ô�ľ������ƶ�
				end--;		//endǰ��
			}
			else
			{
				break;		//���Ƿ�������ͬ�Ļ���С�ڴ���ֵ��Ԫ�أ���ͣ�£�����ѭ��
			}
		}
		a[end + 1] = tmp;		//��end + 1��λ�÷��뱣���tmpֵ
	}

}

//ð������
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
