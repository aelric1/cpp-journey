#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cout << "enter number: ";
    cin >> num;
    bool isprime= true ; 
    if (num <2 ) {
        isprime= false ; 
    }
    else{
        for( int i= 2 ; i<= sqrt(num) ; i++){
            if (num % i ==0  ){
                isprime =false ;
                    break ;   
            }
        }
    }
    if (isprime){
        cout << "the number is prime" << endl;
    }
    else{
        cout << "the number is prime" << endl;
    }
    }