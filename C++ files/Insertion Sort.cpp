#include <iostream>
using namespace std;

int main(){
	int arr[10];
	int n;
	cout<<"Enter no. of elements (in range 1 to 10): "<<endl;
	cin>>n;
	if(n>10||n<=0){
		cout<<"Enter valid input"<<endl;
		return 0;
	}
	cout<<"Give elements of array:"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Your array is:"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Insertion Sorted array:"<<endl;
	for(int i=1; i<n; i++){
	int temp=arr[i];
	int j=i-1;
//		for(; j>=0; j--){
//			if(arr[j]>temp){
//			arr[j+1]=arr[j];
//			}
//			else {
//				break;
//			}
//		}
		while(j>=0){
			if(arr[j]>temp){
			arr[j+1]=arr[j];
			}
			else {
				break;
			}
		j--;
		}
		arr[j+1]=temp;
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
