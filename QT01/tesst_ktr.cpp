#include<stdio.h>
#include<malloc.h>

int lachinhphuong(int x)
{
	for(int i = 1; i <= x; i++)
	{
		if(i*i == x)
			return 1;
	}
	return 0;
}
void ketqua(int arr[], int n)
{
	int index = -1;
	for(int i = 0; i < n; i++)
	{
		if(lachinhphuong(arr[i]))
		{
			index = i;
			break;
		}
	}
	if(index == -1)
	{
		printf("\nKet qua: khong co");
		return;
	}
	int flag = 0;
	for(int i = index; i < n; i++)
	{
		if(lachinhphuong(arr[i]))
		{
			if(arr[i] < arr[index])
			{
				flag = 1;
				break;
			}
			else
			{
				index = i;
			}
		}
	}
	if(flag == 1)
	{
		printf("\nKet qua: khong tang dan");
	}
	else
		printf("\nKet qua: tang dan");
}
int main()
{
	int n;
	int arr[n];
	printf("\nNhap n,n gia tri ");
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	ketqua(arr,n);
}
