#include <iostream>
using namespace std;

void print_sort(int *arr,int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << "  ";
	cout << endl;	
}

void quick_sort(int *arr, int L, int R)
{
	if(L>=R) return;
	int i=L, j=R, first = arr[L];
	int temp = 0;//ceshi github 
	while(i<j)
	{
		while(arr[i] < first && i < j)
			i++;
		while(arr[j] > first && i < j)
			j--;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp; 
	}
	arr[i] = first;
	quick_sort(arr, L, i-1);
	quick_sort(arr, i+1, R);
}

void merge_sort(int *arr, int L, int mid, int R)
{
	int left_size = mid - L;
	int right_size = R - mid+1;
	
	int *L_arr = new int[left_size];
	int *R_arr = new int[right_size];
	for(int i=0; i<mid; i++)
		L_arr[i-L] = arr[i];
	for(int i=mid; i<=R; i++)
		R_arr[i-mid] = arr[i];
	
	int i=0, j=0, k=L;
	while(i<left_size && j<right_size)
		if(L_arr[i] < R_arr[j])
			arr[k++] = L_arr[i++];
		else
			arr[k++] = R_arr[j++];
	while(i<left_size)
		arr[k++] = L_arr[i++];
	while(j<right_size)
		arr[k++] = R_arr[j++]; 
}

void merge(int *arr, int L, int R)
{
	if(L>=R)
		return;
	else{
		int mid = (L+R)/2;
		merge(arr, L, mid);
		merge(arr, mid+1, R);
		merge_sort(arr, L, mid+1, R);
	}
}

int main()
{
	int arr[10] = {2,5,1,6,8,4,7,9,0,3};
	//merge(arr, 0, 9);
	quick_sort(arr, 0, 9);
	print_sort(arr,10);
return 0;
}
