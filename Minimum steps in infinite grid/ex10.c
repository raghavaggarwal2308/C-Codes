#include<stdio.h>
#include <stdlib.h>

int main()
{
     int min, tot=0, a, b , x , y, c, d;
     scanf("%d %d", &a, &b);
     int n=1;
     while(n!=0)
     {
         scanf("%d %d", &x, &y);
         c = x-a;
         d = y-b;
         if(c<0)
            c = c * -1;
         if(d<0)
            d = d * -1;
         if(c<d)
         {
             min = d;
         }
         else
             min = c;
         a = x;
         b = y;
         tot = tot + min;
         scanf("%d",&n);
     }
     printf("%d", tot);

}
