#include <iostream>
#include <ctime>
#include<cstdlib>
void temperature(double c,double f,double k){
    string i;
    cin >> i;
    if(i=="c"){
        
        cout << (c*9/5)+32 << "f"<< endl; 
        cout << c+273.15 << "k"<< endl; 
    }
    else if(i=="f"){
        cout << (f-32)*5/9 << "c"<< endl;
        cout << f << "c"<< endl;
    }
    else if(i=="k"){
        cout << k-273.15 << "c"<< endl;
        cout << ((k-273.15)*9/5)+32  << "f"<< endl;
    }
}
void distance(double m, double mi , double cm , double km ,  double ft ,double in ){
    string i;
    cin >> i;
    if(i=="m"){
        cout << i<<"km";
    }
}

 
using namespace std;
 
int main()
{
// unit conv

    return 0;
}
