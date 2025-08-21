#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

int main()
{

int guess , x, i; 
cout << " geuss where is '$'"<< endl << "       #-$-#\n";
cout << " enter : "<< endl; 
cin >> guess ;

i = time(0);
srand(i);
x = 1 + rand()% 3;
 cout << x; 
//
if(x==1){
cout << "$-#-#"<< endl; 
    if(guess==1){
        cout <<"nice job you won!"<< endl;
    }
    if(guess==2){
        cout <<"try again"<< endl;
    }
    if(guess==3){
        cout <<"try again"<< endl;
    }

}
else if(x==2){
cout << "#-$-#"<< endl; 
    if(guess==1){
        cout <<"try again"<< endl;
    }
    if(guess==2){
        cout <<"nice job you won!"<< endl;
    }
    if(guess==3){
        cout <<"try again"<< endl;
    }
}
else if(x==3){
cout << "#-#-$"<< endl; 
    if(guess==1){
        cout <<"try again"<< endl;
    }
    if(guess==2){
        cout <<"try again"<< endl;
    }
    if(guess==3){
        cout <<"nice job you won!"<< endl;
    }
}
    return 0;
}
