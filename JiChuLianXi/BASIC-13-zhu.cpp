#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	int num[220];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}
