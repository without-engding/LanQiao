#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int number[10010];
	for(int i=0;i<num;i++)
	{
		cin>>number[i];
	}
	int max=number[0];
	int min=number[0];
	int sum=number[0];
	
	for(int i=1;i<num;i++)
	{
		if(number[i]>max)
		{
			max=number[i];
		}
		if(number[i]<min)
		{
		min=number[i];
		}
		sum+=number[i];
	}
	cout<<max<<endl<<min<<endl<<sum;
	return 0;
}
