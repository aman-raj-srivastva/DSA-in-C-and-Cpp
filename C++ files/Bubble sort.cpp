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
	cout<<endl<<"Bubble Sorted array:"<<endl;
	for(int i=0; i<n-1; i++){      		/*or--> for(int i=1; i<n; i++){   */
		for(int j=0; j<n-i-1; j++){		/*      for(int j=0; j<n-i; j++){  */	
			if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
		}
	}
	for(int e=0; e<n; e++){
		cout<<arr[e]<<" ";
	}
	return 0;
}
