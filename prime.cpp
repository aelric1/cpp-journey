#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;;
int  odd( int i ){
  return i %=2 ; 
  }
int main(){
int  num;
// prime number 
cout << "enter numbers  : ";
cin >> num ; 
num = odd(num);
if (num ==0 ){
    while (true){
    cout << " the number is doubt " << endl;
     break; }}
else {
    cout << " cum" << endl;}
   
   }
 

    return 0;
}