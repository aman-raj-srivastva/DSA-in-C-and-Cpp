#include<iostream>
using namespace std;
int main(){
	cout<< "enter 1 for infinite loop and any other digit for not" <<endl;
		int a;
		cin>>a;
	while(1){
		switch(a){
			case 1: cout<<":) :(";
			break;
			default: cout<<"end";
			exit(2);
		}	
	}
	return 0;
}
