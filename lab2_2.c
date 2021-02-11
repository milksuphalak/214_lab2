#include <stdio.h>
int main ()
{
    char pro;
    int x,s;
    float t,sum=0;
    scanf ("%c",&pro);
    scanf ("%f",&t);
    x=t;
    s=t*100;
    s%=100;
    if (pro=='A')
    {
        sum+=199;
       if(t>200)
       {
            x-=200;
            sum+=x*3;
            sum+=s*3/60.0;
       }
    } else if (pro=='B')
    {
        sum+=299;
        if (t>400)
        {
           x-=400;
            sum+=x*2;
            sum+=s*2/60.0;
        }
    }
    printf ("%.2f",sum);
    return 0;
}
