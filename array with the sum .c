#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n]; 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Result:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", sum - a[i]);
    }
    return 0;
}
