/*Write a program that will sort the array elements in ascending order
  using Bubble Sort Algorithm*/
#include<stdio.h>
int main()
{
    int Data[100],n,i,j,swap;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&Data[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(Data[j]>Data[j+1])
                {
                    swap=Data[j];
                    Data[j]=Data[j+1];
                    Data[j+1]=swap;
                }
            }
        }
        printf("Sorted list in ascending order:\n");
        for(i=0;i<n;i++)
            printf("%d\n",Data[i]);
        return 0;
}


