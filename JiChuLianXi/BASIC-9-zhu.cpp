#include<stdio.h>
int num;
int main()
{
	scanf("%d",&num);
	while(num>=1&&num<=54)
	{
	for(int i=10000;i<=99999;i++){

    int b = i%100000/10000;

    int c = i%10000/1000;

    int d= i%1000/100;

    int e = i%100/10;

    int f=i%10;

    if(b==f&&c==e&&(b+c+d+e+f==num))
	{
      printf("%d\n",i);
    }
}
	for(int i = 100000;i<=999999;i++)
	{

int a =i%1000000/100000;

int b = i%100000/10000;

int c = i%10000/1000;

int d= i%1000/100;

int e = i%100/10;

int f=i%10;

if(a==f&&b==e&&c==d&&(a+b+c+d+e+f==num))
{
	printf("%d\n",i);

	}
	
}
break;
}
}

