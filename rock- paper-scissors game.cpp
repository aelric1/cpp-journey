#include<iostream>
#include<cstdlib>


using namespace std;

int main(){
int x, probability ;
cout << "rock, paper, scissors game \n"<< " pick one of them : \n";
string pick , computer ;
string list[3]={"rock" ,"paper" ,"scissors" };
cin >> pick;
    x= time(0) , probability;
    srand(x);
probability= 1 + rand()% 3;  
if(probability == 1){
     cout << "";
     computer = list[0];
     
}
else if(probability == 1){
     cout << "";
     computer =  list[1] ;
    
}
else{
     cout << "";
     computer =  list[2] ;
     
}
   
                        
    cout << computer << endl;
if (computer == pick ){
    cout << "draw"<<endl ;
}
else if (computer != pick){
    if  ((computer=="rock" && pick =="paper")||(computer=="scissors" && pick=="rock")||(computer=="paper" && pick =="scissors")){
      cout << "you won ";}
    else if((pick == "rock" && computer == "paper") || (pick == "scissors" && computer == "rock") || (pick == "paper" && computer == "scissors")
){
        cout << "you lose" << endl;}}
  
else{
    cout<< "";
}
    return 0;

}
