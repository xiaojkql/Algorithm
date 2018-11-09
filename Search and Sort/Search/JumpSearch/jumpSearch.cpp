#include"jumpSearch.h"
#include<cmath>
#include<algorithm>
#include<iostream>

int jumpSearch(int arr[], int elem, int arr_size)
{
	// ÿһ������ĳ��� block_Size
	int step = std::sqrt(arr_size);
	int pos = step;
	int prev = 0;

	// �ҵ��պô���elem�� lower_bound
	while (arr[std::min(pos, arr_size) - 1] < elem)
	{
		prev = pos;
		pos += step;
		if (prev >= arr_size)
			return -1;
	}

	while (prev < std::min(pos, arr_size))
	{
		if (arr[prev] == elem)
			return prev;
		++prev;
	}

	return -1;
}