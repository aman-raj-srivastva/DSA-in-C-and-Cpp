//LEC 08 HW:-

//#include<iostream>
//using namespace std;
//int main(){
//	int bitn,bitm,n,m,count=0,orgn,orgm;
//	cout<<"Enter Two no."<<endl;
//	cin>>n>>m;
//	orgn=n;
//	orgm=m;
//	while(n!=0 || m!=0){
//		bitn=n&1;
//		if(bitn==1){
//			count++;
//		}
//		bitm=m&1;
//		if(bitm==1){
//			count++;
//		}
//		n=n>>1;
//		m=m>>1;
//	}
//	cout<<"The no. of set bits in "<<orgn<<" & "<<orgm<<" is "<<count;
//	//return 0;
//}

#include <iostream>
using namespace std;
int fib(int n){
	int a1=0,a2=1,nextTerm,ans;
	nextTerm=a1+a2;
	for(int i=0;i<=n-1;i++){
		ans=a1;
		a1=a2;
		a2=nextTerm;
		nextTerm=a2+a1;
	}
	return ans;
}
int main(){
	int n;
	cout<<"enter term ";
	cin>>n;
	switch(n){
		case(1): cout<<"The "<<n<<"st term of fibonacci series is "<<fib(n);
		break;
		case(2): cout<<"The "<<n<<"nd term of fibonacci series is "<<fib(n);
		break;
		case(3): cout<<"The "<<n<<"rd term of fibonacci series is "<<fib(n);
		break;
		default: cout<<"The "<<n<<"th term of fibonacci series is "<<fib(n);
		break;
	}

	return 0;
}


