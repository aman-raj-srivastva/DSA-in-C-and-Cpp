#include<stdio.h>
int binsrch(int arr[], int size, int key){
	int strt=0;
	int end=size-1;

	int mid=(strt+end)/2;
	while(strt<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(key>arr[mid]){
			strt=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=(strt+end)/2;
	}
	return -1;
}
int main(){
	//array should be sorted
	int odd[6]={1,3,5,7,9,11};
	int even[6]={2,4,6,8,10,12};
	int key;
	scanf("%d",&key);
	
	int oddans=binsrch(odd,6,key);
    (oddans == -1) ? printf("Element not found in odd array\n") : printf("The index of %d in odd array is %d\n", key, oddans);
	
	int evenans=binsrch(even,6,key);
	(evenans == -1) ? printf("Element not found in even array\n") : printf("The index of %d in even array is %d\n", key, evenans);
}




