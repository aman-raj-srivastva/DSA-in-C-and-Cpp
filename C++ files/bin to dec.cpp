
//h/w question
//Logic for converting the number to 2's complement :
//1. convert the number into binary ( normal way, no complementation);
//2. Print the binary digits from right (lsb) to left (msb) as it is till first 1. After that write 1's complement.
//
//Example- 0000010001
//here write from right side til first one means - 10001
//then write 1's complement after that, so 11111
//Answer = 1111110001
//
//So for coding, at first take an array of 32 elements because integer size is 32 bits in my device. Each element of an array denotes one bit in the input integer. 
//Initialise all the elements to 0.
//
//#include <iostream>
//using namespace std;
//
//int main() {
//  int arr[32],i ;
//  int n;
//  while(1)
//    {
//      cin>>n;
// for(i=0;i<32;i++)
//   {
//     arr[i]=0;
//   }
//      if(n<0)
//      {
//          int d;
//          d=-n;
//          int digit, bit, flag;
//          flag =0;
//          i=31;
//          while(d!=0)
//            {
//              bit=d&1;
//              if(flag==0)
//              {
//                arr[i]=bit;
//                if (bit==1)
//                {
//                  flag=1;
//                }
//              }
//              else
//              {
//                arr[i]=(!bit);
//              }
//              d=d>>1;
//              i--;
//            }
//          while(i>=0)
//            {
//              arr[i]=1;
//              i--;
//            }
//          for(i=0;i<32;i++)
//            {
//              cout<<arr[i];
//            }
//      }
//      else
//      {
//          int digit, bit;
//          i=31;
//          while(n!=0)
//            {
//              bit=n&1;
//              arr[i]=bit;
//              n=n>>1;
//              i--;
//            }
//          for(i=0;i<32;i++)
//            {
//              cout<<arr[i];
//            }
//        
//      }
//    cout<< endl ;    
//    }
//  
//} 



//Code for Negative as well as Postive nos  to convert it into binary:

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//
//    int n;
//
//    cin>>n;
//
//    cout<<"The Binary of the Number is : "<<bitset<32>(n)<<endl;
//
//     return 0;
//
//} 


//binary to decimal

#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int i = 0;
int ans = 0;
while(n!=0){
	int digit=n%10;
   	if(digit==1){
   		ans = ans+pow(2,i); 
	   }
	   n=n/10;
	i++;
}
cout<<ans;
return 0;
}


