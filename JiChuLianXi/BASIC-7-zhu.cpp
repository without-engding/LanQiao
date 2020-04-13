#include<iostream>
using namespace std;
int main()
{
	for(int i=100;i<=999;i++)
	{
		int a=i/100;
		int b=i/10%10;
		int c=i%10;
		int temp=a*a*a+b*b*b+c*c*c;
		if(i==temp)
		cout<<i<<endl;
		
	}
}
