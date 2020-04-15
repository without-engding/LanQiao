#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int number[1010];
	for(int i=0;i<num;i++)
	{
		cin>>number[i];
	}
	int key;
	cin>>key;
	for(int i=0;i<num;i++)
	{
		if(number[i]==key)
		{
			cout<<i+1;	
			break;
		}
		else if(i==num-1)
		{
			cout<<"-1";
			break;
		}
	}
	return 0;
}
