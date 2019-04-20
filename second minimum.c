#include <stdio.h>
int main ()
{
    int a[100] ,min,min2 , n, i ;
    printf ("Enter the number of elements in array:\n");
    scanf ("%d" ,&n);

    printf ("Enter %d integers:\n",n);
            for (i=0 ; i<n ; i++)
                scanf ("%d",& a[i]);

    min= a[0] ;
    min2 = a[0] ;

    for (i = 0; i < n; i++)
{
	if(a[i] < min)
	{
		min2 = min;
		min = a[i];
	}
	else if(a[i] < min2 && a[i] > min)
	{
		min2 = a[i];

	}
}
        printf("Second Minimum is %d.\n" ,min2 );

}
