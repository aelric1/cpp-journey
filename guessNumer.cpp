#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
cout << "enter the range of the number : "; 
int range , hits ;
cin >> range;
cout << "\n enter the hits : ";
cin >> hits ; 
int i = time(0);
srand(i);
 int num = 1 + rand()% range , guess;
for(int i=0 ; i< hits ; i++)
{
    cout << " \n enter the guess :";
        cin >> guess;
   if (guess == num+1 ||guess == num-1|| guess == num+2 ||guess == num-2 ){
        cout << " too high"<< endl;}
    else if(guess == num){
        cout << " you got it " << endl;
        break;
    }
   else{
    cout << " too low"<< endl;}

}
     return 0;
}