#include<stdio.h>

#define MAXN 100

int main()
{
	int n; //jumlah datanya
	scanf("%d",&n); getchar();
	int arr[MAXN + 10];
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]); getchar();
	}
	int search;
	bool isFound = false; //flag
	scanf("%d",&search); getchar();
	for(int i = 0 ; i < n ; i++)//looping nya
	{
		if(search == arr[i]) // klo misalnya datanya ketemu
		{
			printf("%d\n",i); //print lokasinya di index berapa
			isFound = true;
			break;
		}
	}
	if(!isFound) printf("-1\n");
	return 0;
}
