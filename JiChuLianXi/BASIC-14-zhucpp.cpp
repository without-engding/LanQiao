#include<iostream>
#include<stdio.h> 
using namespace std;
int main()
{
	int second;
	int minue=0,hour=0;
	cin>>second;
	hour=second/3600;
	second-=hour*3600;
	minue=second/60;
	second-=minue*60;
	printf("%d:%d:%d\n",hour,minue,second);
	
}
