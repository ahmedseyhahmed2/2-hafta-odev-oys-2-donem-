#include<stdio.h >
int usal(int ,int );
int main()
{
	int taban=3;
	int us=2;
	int sonuc;
	sonuc= usal(taban , us);
	
	printf ("(%d)^%d=%d\n",taban,us,sonuc);
	return 0;
	
}
int usal(int taban,int us )
{
	if (us==0)
	return 1;
	return taban*usal(taban,us-1);
}
