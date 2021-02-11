#include<stdio.h>
int main()
{
    int a,b,i=1,num;
    scanf("%d %d",&a,&b);
    switch(b)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : num = 31;
                  break;
        case 2 : num = 28;
                 break;
        case 4 :
        case 6 :
        case 9 :
        case 11 : num = 30;
                  break;
    }
    while(i < num)
    {
        i+=7;
    }
    i-=7;
    for(i;i<=num;i++)
    {
        a+=1;
    }
    if(a>7)
        a-=7;
    printf("%d",a);
    return 0;
}
