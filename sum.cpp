#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
// prime function : 
bool prime(int n){
    bool isprime= true , p = false ; 
        if (n <2 ) {
            isprime= false ;} 
        else{
            for( int v= 2 ; v<= sqrt(n) ; v++){
                if (n % v == 0  ){
                    isprime =false ;
                        break ;
                            p= true ;   
                    }
                else{
                            p= false; 
                }
            }
        }
        return p;
}
int main() {
int sum=0 , num;  
vector<int> nums={};
cout << " enter the numbers  :    " << endl; 
while(true){
    cout <<":: ";
    cin >> num;
    if(num == 0) break;
    nums.push_back(num); 
}
for(int i=0 ; i< nums.size()-1  ; i++){
    sum += nums[i];
}
cout <<" the sum ["<< sum <<"]"<< endl <<"the arvege " <<"["<< sum/2 <<"]"<< endl ; 

if(prime(sum)){
    cout <<"it's prime number "<< endl;
}
else {
    cout <<"it isn't  prime number " << endl ;
}
    return 0;
}