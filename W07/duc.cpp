#include<stdio.h>
#include <math.h>
void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

void xuatMang(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void insertion_Sort(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int temp = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
		xuatMang(arr,n);
	}
}

void duyetMang(int arr[], int n, int b[], int &nb)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			b[nb++] = arr[i];
		}
	} 
}

void sapxepMang(int arr[], int n, int b[], int nb)
{
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			arr[i] = b[k++];
		}
	}
}

int main()
{
	long long n=3;
	while(true)
	{
		if(pow(3, n) + pow(4, n) == pow(5, n))
		{
			printf("%d + %d = %d, %d", pow(3, n), pow(4, n), pow(5, n), n);
			break;
		}
		n++;
	}
}
