#include <stdio.h>
#include <stdlib.h>

	int ncarpim(int x, int y);
	int pcarpim( int A , int B);

int main() {

int sayi1 ,sayi2,sonuc;
printf("sayi girin  :");
scanf(" %d",&sayi1);

printf(" sayi girin :");
scanf("%d",&sayi2);
	if ( sayi1 < 0 || sayi2 < 0 )
	{
	sonuc = ncarpim(sayi1, sayi2);
	printf("%d * %d = %d\n", sayi1, sayi2, sonuc);
	}
	 else {
     	sonuc =pcarpim( sayi1,sayi2);
 		printf("%d * %d = %d\n", sayi1, sayi2, sonuc);
 		}
return 0;
}
int pcarpim( int A , int B)
{
	if ( A==0 || B==0) 
	
	return 0 ;
	
	else if ( B> 0) 
	return A + pcarpim( A , B-1);	
}
int ncarpim(int x, int y) 
	{
	if (y == 0)
	return 0;
	if (y < 0)
	return (-x) + ncarpim(x, y + 1);
	return x + ncarpim(x, y - 1);
	}

