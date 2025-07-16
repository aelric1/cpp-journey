#include<iostream>
#include<string>
#include<cmath>

using namespace std;
float  add(float y , float x){
      return x+y ;}
float min(float x, float y){
      return x-y ;}
float mtp(float x, float y){
      return x*y ;}
float dif(float x, float y){
      return x/y ;}

int por(int x, int y){
      return x%y ;}                      
      
int main()
{    
float x ,y ; 
char op; 
    cout << "enter the first number" << endl;
        cin >>x ;
    cout << "enter the operation " << endl;
        cin >>op;
    cout << "enter the second number " << endl;
        cin >>y;
    switch(op){
        case '+':
            cout <<add(x, y)<< endl;
             break; 
        case '-':
            cout <<min(x, y)<< endl;
             break;
        case '*':
            cout <<mtp(x, y)<< endl;
             break;
        case '/':
            cout <<dif(x, y)<< endl;
             break;
        case '^':
            cout <<pow(x, y)<< endl;
             break;
        case '%':
            cout <<por(x, y)<< endl;
             break;          
             
        default: 
            cout << "the operations (+ , - , * , ^ , %)"  << endl;
    }
                
    return 0;
}