#include<iostream>
#include<string.h>
#include<math.h>
#include<stdio.h>
using namespace std;
/*int main()
{
	int n;
	char Hex[15][1100];
	char Oct[15][10000];
	long long temp=0LL;
	int len;
	cin>>n;
	memset(Oct,0,sizeof(Oct));
	memset(Hex,0,sizeof(Hex));
	for(int i=0;i<n;i++)
	{
		cin>>Hex[i];
		int k=0;
		len=strlen(Hex[i]);
		for(int j=len-1;j>=0;j--)
		{
			if(Hex[i][j]<'A')
			temp+=(Hex[i][j]-48)*pow(16,len-1-j);
			else
			temp+=(Hex[i][j]-65+10)*pow(16,len-1-j);
		}
		while(temp>0)
		{
			Oct[i][k]=temp%8+48;
			temp/=8;
			k++;	
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=strlen(Oct[i])-1;j>=0;j--)
		{
			cout<<Oct[i][j];
		}
		cout<<endl;
	
	}
	return 0;
	
}


�����ҵ�һ�����������뷨��Ȼ�����֣�������longlong�ͻ��ǲ��У����Ծ�ֻ�ܻ�һ��˼·��*/

 char h[100002],b[400002],e[400002];
  int main(){
      int n;
      scanf("%d",&n);
      while(n--){
          scanf("%s",h);
         int i,len=0;
         /*�Ȱ�16���ƻ��ɶ����ơ����Ӻ���ǰչ�� */
         for(i=strlen(h)-1;i>=0;i--){
             int v;
             if(h[i]>='0' && h[i]<='9')
                 v=h[i]-'0';
             else v=h[i]-'A'+10;
             for(int j=0;j<4;j++){
                 b[len++]=v%2+'0';
                 v/=2;
             }
         }
         b[len]='\0';
         int x=0,cnt=1;
         int l=0;
         for(i=0;i<len;i++){
             /*ÿ��λ������ת��һλ8����,�������λ��0*/
             if(cnt==4||i==len-1){
                 x=cnt*(b[i]-'0')+x;
                 cnt=1;
                 e[l++]=x+'0';
                 x=0;
             } else{
                 x=cnt*(b[i]-'0')+x;
                 cnt*=2;
                }
         }
         i=l-1;
         while(i>=0 && e[i]=='0')
             /*ȥ��ǰ��0*/
             i--;
         for (;i>=0;i--){
             printf("%c",e[i]);
         }
         printf("\n");
     }
     return 0;
}
