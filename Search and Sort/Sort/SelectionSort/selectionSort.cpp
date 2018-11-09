#include"selectionSort.h"
#include<algorithm>

// unstable
// [lo, hi)
void selectionSort(int arr[], int arr_size)
{
	for (int i = 0; i < arr_size-1; ++i)
	{
		int min_index = i;
		for (int j = i + 1; j < arr_size; ++j)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		if (min_index != i)
			std::swap(arr[i], arr[min_index]); // swap()�����ݵľ������ã�����Ҫ������һ��
	}
}


// stable
void selectionSort_stable(int arr[], int arr_size)
{
	for(int i = 0;i<arr_size-1;++i)
	{
		int min_index = i;
		for(int j = i+1;j<arr_size;++j)
		{
			if(arr[min_index] < arr[j])
				min_index = j;
		}

		int key = arr[min_index];
		while(min_index>i)
		{
			arr[min_index] = arr[min_index-1];// ����Сֵ��ǰ��������ǰ�ƶ�
		}
	}
}