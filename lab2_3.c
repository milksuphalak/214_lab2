#include<stdio.h>
int main()
{
    int a,b,c,num[3],t=0;
    char check[4];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a>c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }
    scanf("%s",check);
    for(int i=0;i<3;i++)
    {
        if(check[i]=='A')
        {
            num[i]=a;
        }
        else if(check[i]=='B')
        {
            num[i]=b;
        }
        else if(check[i]=='C')
        {
            num[i]=c;
        }
    }
    printf("%d %d %d",num[0],num[1],num[2]);

    return 0;
}
