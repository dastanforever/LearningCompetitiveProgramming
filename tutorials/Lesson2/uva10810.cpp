#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

vector < int > a(500005,0);
long long int inversion=0;

vector < int > merge(vector < int > arr1, vector < int > arr2,int low, int mid, int high)
{
	int i = 0,j = 0,k = 0;
	vector < int > arr(high-low+1,0);
	while(i < arr1.size() && j < arr2.size())
	{
		if(arr1[i] <=  arr2[j]) { arr[k++] = arr1[i++];}
		else if (arr1[i] >  arr2[j]) { arr[k++] = arr2[j++]; inversion += (arr1.size() - i);}
	}
	while(i < arr1.size()) { arr[k++] = arr1[i++];}
	while(j < arr2.size()) { arr[k++] = arr2[j++];}
	return arr;
}

vector < int > split(vector < int > arr, int low, int high)
{
	int mid = (low+high)/2;
	vector < int > temp(1,arr[low]);
	if (low == high) return temp;
	else return merge(split(arr,low,mid),split(arr,mid+1,high),low,mid,high);
}

int main(void)
{
	int n,i;
	vector < int > b;
	while(scanf("%d",&n),n != 0)
	{
		inversion = 0;
		for (i = 0; i < n; ++i) { scanf("%d",&a[i]); }
		split(a,0,n-1);
		printf("%lld\n", inversion);
	}
	return 0;
}