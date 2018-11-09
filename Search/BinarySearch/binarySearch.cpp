#include"binarySearch.h"

// ���� [lo, hi) ��Ѱ��

int binarySearch_recur(int arr[], int elem, int lo, int hi)
{
	int mi;
	if (lo < hi)
	{
		mi = (lo + hi) / 2; //��Ч�� lo + (hi - lo) / 2
		if (arr[mi] == elem)
			return mi;
		else
		{
			return (elem < arr[mi]) ?
				binarySearch_recur(arr, elem, lo, mi) : binarySearch_recur(arr, elem, mi + 1, hi);
		}
	}
	else
		return -1;
}

int binarySearch_iter(int arr[], int elem, int lo, int hi)
{
	int mi;
	while (lo < hi)
	{
		mi = (lo + hi) / 2;
		if (arr[mi] == elem)
		{
			return mi;
		}

		else
			(arr[mi] < elem) ? lo = mi + 1 : hi = mi;
	}
	return -1;
}

// ���� [lo, hi]��Ѱ��
// ���� [lo, hi] ��Ѱ��
int binarySearch_recur2(int arr[], int elem, int lo, int hi)
{
	if (lo <= hi)
	{
		int mi = (lo + hi) / 2; //��Ч�� lo + (hi - lo) / 2
		if (elem == arr[mi])
			return mi;
		if (elem < arr[mi])
			return binarySearch_recur2(arr, elem, lo, mi - 1);
		if (elem > arr[mi])
			return binarySearch_recur2(arr, elem, mi + 1, hi);
	}
	else
		return -1;
}