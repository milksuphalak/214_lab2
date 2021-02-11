#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%lld",&a);
    b = a;
    if(a == 0)
        printf("Zero");
    else
    {
        int i,num;
        for(num=0;b>0;num++)
        {
            b/=10;
        }
        int x[num];
        for(i=0;i<num;i++)
        {
            x[i] = a%10;
            a/=10;
        }
        for(i=num;i>0;i--)
        {
            switch(x[i-1])
            {
            case 0 : printf("Zero");
                     break;
            case 1 : printf("One");
                     break;
            case 2 : printf("Two");
                     break;
            case 3 : printf("Three");
                     break;
            case 4 : printf("Four");
                     break;
            case 5 : printf("Five");
                     break;
            case 6 : printf("Six");
                     break;
            case 7 : printf("Seven");
                     break;
            case 8 : printf("Eight");
                     break;
            case 9 : printf("Nine");
                     break;
            }
            if(i!=1)
                printf("-");
        }
    }

    return 0;
}
