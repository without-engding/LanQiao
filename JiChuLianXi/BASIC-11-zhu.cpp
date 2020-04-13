#include<iostream>
#include<string.h>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	char Hex[15];
	long long temp=0LL;
	int len;
	memset(Hex,0,sizeof(Hex));
		cin>>Hex;
		int k=0;
		len=strlen(Hex);
		for(int j=len-1;j>=0;j--)
		{
			if(Hex[j]<'A')
			temp+=(Hex[j]-48)*pow(16,len-1-j);
			else
			temp+=(Hex[j]-65+10)*pow(16,len-1-j);
		}
		cout<<temp<<endl;
	return 0;
	
}
