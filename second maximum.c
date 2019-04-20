#include <stdio.h>
int main ()
{
    int a[100] ,max,max2 , n, i ;
    printf ("Enter the number of elements in array:\n");
    scanf ("%d" ,&n);

    printf ("Enter %d integers:\n",n);
            for (i=0 ; i<n ; i++)
                scanf ("%d",& a [i]);

    max = a[0] ;
    max2 = a[0] ;

    for (i = 0; i < n; i++)
{
	if(a[i] > max)
	{
		max2 = max;
		max = a[i];
	}
	else if(a[i] > max2 && a[i] < max)
	{
		max2 = a[i];
	}
}
        printf("Second Maximum is %d.\n" ,max2 );

}
