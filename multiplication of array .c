#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i==0)
        printf("%d ",a[i]*a[i+1]);
        else if(i==n-1)
        printf("%d ",a[i]*a[i-1]);
        else
        printf("%d ",a[i-1]*a[i+1]);
    }
        return 0;
}
