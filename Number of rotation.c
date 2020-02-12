#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    int l=0, u=n-1,m;
    while(l<u)
    {
        m = (l+u)/2;
        if(n==2)
        {
            if(a[l]>a[u])
            printf("%d", u);
            else
            printf("%d", -1);
            break;
        }
        if(a[u]>=a[l])
            printf("-1");
        else
        {
        if(a[m]<a[m+1] && a[m]<a[m-1])
        {
            printf("%d", m);
            break;
        }
        if(a[u]>a[m])
        {
            u = m-1;
        }
        if(a[u]<a[m])
        {
            l = m+1;
        }
        }
    }
    return 0;
}
