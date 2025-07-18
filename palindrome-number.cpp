
#include <iostream>
#include <string>

using namespace std;

int main() {
string n;
    cin >> n;
int i = n.size();
bool Ispalindrome =true ;
string re= n ; 
for (int x = 0; x < i / 2; x++) {
   swap(re[x], re[i - 1 - x]);
   }
  if( re == n){
    cout << "true" << endl;}
   else{
    cout << "false" << endl;}          
        

   return 0;
}