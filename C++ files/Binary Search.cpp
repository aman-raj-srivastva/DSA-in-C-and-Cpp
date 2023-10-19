#include <iostream>
using namespace std;
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
	int odd[6]={1,3,5,7,9,11};
	int even[6]={2,4,6,8,10,12};
	int key;
	cin>>key;
	
	int oddans=binsrch(odd,6,key);
	cout<<"the index of "<<key<<" in odd array is "<<oddans<<endl;
	
	int evenans=binsrch(even,6,key);
	cout<<"the index of "<<key<<" in even array is "<<evenans<<endl;
	
}
