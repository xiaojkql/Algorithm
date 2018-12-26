#include"interpolationSearch.h"
#include<iostream>
// ������[lo,hi)��Ѱ��elem

// ���õ����汾
int interpolationSearch_iter(int arr[], int elem, int lo, int hi)
{
	if (elem < arr[lo] && elem>arr[hi-1])
		return -1;
	//if (elem == arr[hi - 1])
		//return hi - 1;

	while (lo < hi)
	{
		//std::cout << lo << " " << hi << std::endl;
		int mi = lo + double(elem - arr[lo]) / (arr[hi-1] - arr[lo])*(hi - lo - 1);
		//std::cout << mi << std::endl;
		if (arr[mi] == elem)
			return mi;
		if (arr[mi] < elem)
			lo = mi + 1;
		else
			hi = mi; // hi��Ԫ�Ǵ��� elem��
	}
	return -1;
}


// [lo , hi]
// ֱ�ӻ��ֵó�mi
int interpolationSearch_iter2(int arr[], int elem, int lo, int hi)
{
	while (lo <= hi && elem>=arr[lo] && arr[hi]>=elem)
	{
		int mi = lo + double(elem - arr[lo]) / (arr[hi] - arr[lo])*(hi - lo);
		if (arr[mi] == elem)
			return mi;
		if (arr[mi] < elem)
			lo = mi + 1;
		else
			hi = mi - 1;
	}
	return -1;
}