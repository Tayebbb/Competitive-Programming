#include<stdio.h>

int main()
{
    int n,k,a[50],count=0;
    scanf("%d%d",&n,&k);
    for (int i=0;i<n;i++)
    scanf("%d", &a[i]);
    for( int i=0;i<n;i++)
    {
        if (a[i]>=1 && a[k-1]<=a[i])
            count++;
    }
        printf("%d",count);
    return 0;

}
