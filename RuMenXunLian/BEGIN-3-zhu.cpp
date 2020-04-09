#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
	
	int r;
	double result;
	double PI;
	PI=acos(-1);
	cin>>r;
	result=PI*r*r;
	printf("%.7lf",result);
	return 0;
}
