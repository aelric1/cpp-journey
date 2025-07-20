#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string first_name; 
    string lest_name; 
    cout << "enter your first name : ";
        cin >> first_name >> endl; 
    cout << "enter your lest name name :  ";
        cin >> lest_name >> endl;
    string fullname; 
     fullname = first_name + lest_name ; 
    cout << " your full name is : " << fullname << endl;
    return 0;
}

