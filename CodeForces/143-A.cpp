#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {

            scanf("%d%d%d", &a,&b,&c);
            d=a+b+c;
            if(d>=2)
                e++;
    }
    printf("%d", e);
}
