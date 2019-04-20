#include<stdio.h>
#include<limits.h>
int main()
{
    int array[100], n, i, max2, max1, min2, min1;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
max1 = max2 = INT_MIN;
for(i=1; i<n; i++)
    {
        if(array[i] > max1)
        {

            max2 = max1;

            max1 = array[i];

        }
        else if(array[i] > max2 && array[i] != max1)
        {

            max2 = array[i];


        }
    }
    min1 = min2 = INT_MAX;
for(i=1; i<n; i++)
    {
        if(array[i] < min1)
        {

            min2 = min1;

            min1 = array[i];

        }
        else if(array[i] < min2 && array[i] != min1)
        {

            min2 = array[i];


        }
    }


   printf("Second Maximum element is %d.\n",max2);
          printf("Second Minimum element is %d.\n",min2);

       return 0;
}
