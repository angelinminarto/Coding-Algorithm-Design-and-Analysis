//iterative

#include<stdio.h>

int main()
{
	int data; //masukkan data
	scanf("%d",&data); //scan angka yg mau diproses (faktorial)
	int hasil = 1; //menampung hasil
	for (int i = data; i > 1; i--) //looping utk menghitung faktorial
	{
		hasil = hasil * i; //itung perkalian faktorial
	}
	printf("%d\n", hasil);
	return 0;
}
