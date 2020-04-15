#include<cstdio>
int main()
{
    int n,a[36][36];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[i][0]=a[i][i]=1;
        for(int j=1;j<i;j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        for(int j=0;j<i;j++)
            printf("%d ",a[i][j]);
        printf("%d\n",a[i][i]);
    }
    return 0;
}

