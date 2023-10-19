#include <stdio.h>
int search(int arr[],int size,int x){
	int i;
	while(i<size){
  	if(arr[i]==x){
  		return i;
	  }
	  i++;
  }
  return -1;
}
int main() {
  	int arr[5] = {2, 4, 0, 1, 9};
  	int x;
  	printf("Enter element to search: \n");
  	scanf("%d",&x);
  
  	int result = search(arr, 5, x);

  	(result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
