#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	char a[20],b[20];
	cin>>a;
	cin>>b;
	if(strlen(a)!=strlen(b))
	cout<<"1";
	else if(strcmp(a,b)==0)
	cout<<"2";
	else
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(fabs(a[i]-b[i])!=32&&fabs(a[i]-b[i])!=0)
			{
				cout<<'4';
				break;
			}
			else if((fabs(a[i]-b[i])==32||fabs(a[i]-b[i])==0)&&i==strlen(a)-1)
			{
				cout<<'3';
			}
			
		}
	}
}
