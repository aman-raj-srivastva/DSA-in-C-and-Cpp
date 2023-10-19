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
	cout<<endl<<"Selection Sorted array:"<<endl;
	for(int i=0; i<n/*or n-1 because nth index will be sorted for sure*/; i++){
	int mindex=i;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[mindex])
			mindex=j;
		}
	swap(arr[mindex],arr[i]);
	cout<<arr[i]<<" ";
	}
	/*//for i<n-1 case
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	*/
	return 0;
}
