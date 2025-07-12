#include<iostream>
using namespace std;

int main()
{
    int  day , hour , min , sec ; 
    cout << "enter ;   day/hour/minute/second " << endl;
    cin >> day ; 
    cin >> hour ; 
    cin >> min ; 
    cin>> sec ; 
    int total; 
        total = (sec) + (min*60) + (hour*3600 ) + (day*3600*24);
        cout << total << "seconds "  << endl;
    return 0;
    
}