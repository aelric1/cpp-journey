#include<iostream>
#include<vector>
using namespace std;

int main()
{
int arr[6]={};//
int x;
cout <<"enter size of array :";
cin >> x;
 cout <<""<< endl;
for(int j=0; j<x ; j++){
    cout << j+1 <<"- enter values :";
    cin >> arr[j];
    cout <<""<< endl;
}

int sum = 0 , size =sizeof(arr)/sizeof(arr[0]) ;
for (int i=0 ; i <size ; i++ ){
    sum += arr[i];
}
cout <<"the arvage of numbers is "<< sum/2 << endl;
 
    return 0;
    
}
