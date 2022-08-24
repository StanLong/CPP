#include <iostream>
 
using namespace std;
 
// 主函数
int main(int argc, char *argv[])
{	
	int arr[] = {9, 5, 6, 8, 2, 7 ,3 ,4, 1};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	for(int i=0; i<len; i++)
	{
		int temp = 0;
		for(int j=i; j<len; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(int i=0; i<len; i++)
	{
		printf("%d ", arr[i]);
	}
}