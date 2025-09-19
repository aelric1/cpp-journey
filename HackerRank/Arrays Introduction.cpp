#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
for(int x=0; x<n ; x++){
  cin>>arr[x];
}
reverse(arr, arr + n);
for(int j=0; j<n ; j++){
  cout<<arr[j]<<" ";
}
    return 0;
}
