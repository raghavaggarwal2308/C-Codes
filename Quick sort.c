#include <stdio.h>
//p is the pivot element
//r is the last element

int partition(int* a,int p ,int r)  //to find the partition element i.e the element after which every element is greater than itself and before every element is smaller
{
    int i=p-1,t,j;
    int x = a[r];
    for(j=p;j<r;)
    {
        if(a[j]<=x)
        {
            i++;
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            j++;
        }
        if(a[j]>x)
        {
            j++;
        }
    }
    t = a[i+1];
    a[i+1] = a[r];
    a[r] = t;
    return i+1;
}
int* quicksort(int* a,int p,int r)
{
    int q;
    if(p<r)
    {
        q = partition(a,p,r);         // q is partition element
        quicksort(a,p,q-1);          //repeating the quick sort on the array before and after partition element
        quicksort(a,q+1,r);
    }
    return a;                       //now a is sorted array
}
int main()
{
    int* p;
    int i, size;
    scanf("%d", &size);         //size of array
    int a[size];
    for(i=0;i<size;i++)         //input array elements
        scanf("%d", &a[i]);
    p = quicksort(a,0,size-1);
    for(i=0;i<size;i++)
    printf("%d ",  p[i]);
    return 0;
}
