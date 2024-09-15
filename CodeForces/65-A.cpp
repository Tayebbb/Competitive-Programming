#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int t;

scanf("%d", &t);
  while(t>=0)
    {gets(str);
    int a=strlen(str);
     if (a>10)
       {
         printf("%c%d%c\n", str[0], a-2,str[a-1]);
       }

  else
    printf("%s\n",str);
  t--;
}
}
