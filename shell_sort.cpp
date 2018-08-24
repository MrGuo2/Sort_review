#include <iostream>
using namespace std;

void print_sort(int *arr, int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << "  ";
	cout << endl; 
}

void shell_sort(int *arr, int num)
{
	int j;
	for(int step = 5; step > 0; step /=2)
		for(int i=step; i < num; i++){
			j = i;
			if(arr[j-step] > arr[j])
			{
				int temp = arr[j];
				do{
                    arr[j]=arr[j-step];
                    j=j-step;
                }
				while(j>=0 && temp<arr[j]);
                
				arr[j+step] =temp;
			}	
		}
}

int main()
{
	int arr[10] = {4,1,6,2,7,9,3,5,0,8};
	shell_sort(arr, 10);
	print_sort(arr, 10);
return 0;
}
