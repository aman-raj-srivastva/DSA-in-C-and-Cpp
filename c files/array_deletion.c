#include <stdio.h>

int main()
{
    int arr[10], pos, i, n=10;
    

	for (i=0; i<10; i++)
		arr[i]=i+1;

	for (i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
    
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &pos);
    
    if ( pos>=n+1 )    
    printf("Deletion not possible.\n");
    
    else
    {    
        for ( i=pos-1; i<n-1; i++ ) 
        arr[i]=arr[i+1];        
        
        printf("Resultant array is\n");
        
        for( i=0; i<n-1; i++ )        
        printf("%d ", arr[i]);        
    }    
    return 0;
}
