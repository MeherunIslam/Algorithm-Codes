/*Write a program that will find the location of a given item in an array
  using Linear Search algorithm*/
#include<stdio.h>
int main()
{
    int a[100],n,item,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter the number to search\n");
        scanf("%d",&item);
        for(i=0;i<n;i++)
        {
            if(a[i]==item)
            {
               printf("%d is present at location %d\n",item,i+1);
               break;
            }
        }
        if(i==n)

            printf("%d is not present in Array\n",item);

      return 0;

        }


