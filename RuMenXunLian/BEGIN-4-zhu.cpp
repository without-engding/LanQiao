#include<iostream>
using namespace std;
/*int F(int i)//���õݹ������������ 
{
	if(i<=2)
	return 1;	
	else
	return (F(i-1)+F(i-2))%10007;
}
������û�뵽�ݹ��������ϴ�����������ʱ�ն��Ƚϴ��������ﻻ��˼·����forѭ�� 
int main()
{
	int i;
	cin>>i;
	cout<<F(i);
	return 0;
}

*/
int main()
{
	int n;
	int a,b,temp;
	a=b=1;//����a��ʾf(n-1),b��ʾ(fn-2)��temp��Ϊ�����������������ݽ������м���� 
	cin>>n;
	for(int i=1;i<n-1;i++)
	{
		temp=b;
		b=(a+b)%10007;
		a=temp;
	}
	cout<<b;
} 
