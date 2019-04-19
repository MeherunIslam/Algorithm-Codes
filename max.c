#include<stdio.h>
int main()
{
    int a[1000], max, n, i, location=1;
 printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        max = a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max = a[i];
            location = i+1;
            }
        }

         printf("Maximum element is present at location %d and it's value is %d.\n", location,max);
         return 0;
}
