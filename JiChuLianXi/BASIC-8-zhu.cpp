#include<stdio.h>
int num;
int main()
{

	for(int i=1000;i<=9999;i++)
	{

    int b = i/1000;

    int c = i%1000/100;

    int d= i%100/10;

    int e = i%10;
    if(b==e&&c==d)
	{
      printf("%d\n",i);
    }
}
return 0;
}

