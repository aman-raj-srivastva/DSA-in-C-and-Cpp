#include<iostream>
using namespace std;
int main(){
	cout<<"Enter amount in INR: ";
	int rs,note=100;
	cin>>rs;
	while(rs>=0){
//	cout<<"enter note amount"<<endl;
//	cin>>note;
	switch(note){
		case(100): cout<<"No. of 100 INR note required is "<<rs/100<<endl;
		rs=rs%100;
		note=50;
		break;
		case(50): cout<<"No. of 50 INR note required is "<<rs/50<<endl;
		rs=rs%50;
		note=20;
		break;
		case(20): cout<<"No. of 20 INR note required is "<<rs/20<<endl;
		rs=rs%20;
		note=1;
		break;
		case(1): cout<<"No. of 1 INR note required is "<<rs/1<<endl;
		rs=rs%1;
		exit(0);
	}
	}
	return 0;
}
