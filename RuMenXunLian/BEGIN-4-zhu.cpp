#include<iostream>
using namespace std;
/*int F(int i)//利用递归进行数列运算 
{
	if(i<=2)
	return 1;	
	else
	return (F(i-1)+F(i-2))%10007;
}
这里我没想到递归在数级较大的情况下消耗时空都比较大，所以这里换个思路，用for循环 
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
	a=b=1;//其中a表示f(n-1),b表示(fn-2)，temp作为第三参量，用于数据交换的中间过程 
	cin>>n;
	for(int i=1;i<n-1;i++)
	{
		temp=b;
		b=(a+b)%10007;
		a=temp;
	}
	cout<<b;
} 
