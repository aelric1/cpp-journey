#include<iostream>
using namespace std;

int main()
{
     cout << "enter numbers of hour  " << endl;
     float hours , weeks , days ; 
      
     cin >> hours ;
     days = hours / 24 ; 
     cout << days << "days "  << endl;
     weeks = hours / (7*24) ; 
     cout << weeks << "weeks "  << endl;
     
     
     
     
    return 0;
}