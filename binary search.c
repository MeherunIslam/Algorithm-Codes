#include <stdio.h>
int main()
{
    int a [1000] , n , item, i , beg , end , mid;

    printf("Enter the number of elements in array:\n");
    scanf("%d" , & n);

    printf(" \nEnter %d integers:\n", n);

    for(i=0 ; i<n ; i++)
        scanf("%d" ,& a[i]);

        printf("Enter the value to find : ");
        scanf("%d" , & item);

        beg= 0;
        end= n-1;
        mid = (beg + end)/2;

        while (beg <= end)
        {

            if (a[mid] > item)
                end = mid-1;

            else if (a[mid] == item)

            {
                printf("%d found at location %d \n" , item ,mid+1);

                break;
            }

            else
                beg= mid +1 ;
            mid = (beg + end)/2;

        }

        if (beg>mid )
            printf("Not formal");


}
