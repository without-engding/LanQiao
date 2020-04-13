#include<iostream>
#include<string.h>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	char Hex[16];
	char num[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	long long temp=0LL;
	int len;
	memset(Hex,0,sizeof(Hex));
	cin>>temp;
	if(temp==0)
	{
		cout<<"0";
	}
	else
	{
		int k=0,v;
	while(temp>0)
	{
		v=temp%16;
		Hex[k++]=num[v];
		temp/=16;
	}
	for(int i=k-1;i>=0;i--)
	{
		printf("%c",Hex[i]);
	}
	
	}	

	
	return 0;
	
}
