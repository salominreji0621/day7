int main() 
{
    int n;
    int sum =0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",sum);
        sum=sum+a[i];
    }
    return 0;
}
