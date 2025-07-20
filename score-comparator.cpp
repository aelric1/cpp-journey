
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
int a_score=0 , b_score=0;
int a[3] , b[3];
cout << "ALIX turn : " << endl;
for(int i=0; i<3 ; i++){
	
        cin >> a[i];
        cout << a[i]<< endl;
}
cout << "BOUB turn :" << endl;
for(int j=0 ; j<3; j++){
	if( j<=100){
        cin >> b[j];
        cout << b[j] << endl;
    }
    else{
        cout << "the max is 100" << endl;
    }
}
 if(a[0] > b[0]){
     a_score= 1+a_score ;
 }
 else if(a[0] ==b[0]){
     a_score +=0;
     b_score +=0;
 }
 else if(a[0] < b[0]){
     b_score= 1+b_score ;
 }
 // round two; 
 if(a[1] > b[1]){
     a_score= 1+a_score;
 }
 else if(a[1]== b[1]){
     a_score +=0;
     b_score +=0;
 }
 else if(a[1] < b[1]){
     b_score= 1+b_score ;
 }
 if(a[2] > b[2]){
     a_score= 1+a_score;
 }
 else if(a[2]== b[2]){
     a_score +=0;
     b_score +=0;
 }
 else if(a[2] < b[2]){
     b_score= 1+b_score ;
 }
 cout <<"|" <<a_score << ":" ;
 cout << b_score<< "|" ;
   return 0;
}