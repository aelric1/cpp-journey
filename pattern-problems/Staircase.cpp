#include<iostream>
#include<string>
#include<cmath>
using namespace std;
    
int main()
{    int n;
  cin >> n; 
    for(int x=0; x<n ; x++){
        for(int y=0 ; y<=x ; y++){
            cout << "#";
        }
        cout <<endl;
    }
    
                
    return 0;
}