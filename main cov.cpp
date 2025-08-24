#include <iostream>
#include <ctime>

using namespace std;

void temperature(double c,double f,double k){
    cout << "enter the unit you have : "<< endl;
    string i;
    cin >> i;
    if(i=="c"){
        cin >> c;
        cout << (c*9/5)+32 << "f"<< endl; 
        cout << c+273.15 << "k"<< endl; 
    }
    else if(i=="f"){
        cin >> f;
        cout << (f-32)*5/9 << "c"<< endl;
        cout << f << "c"<< endl;
    }
    else if(i=="k"){
        cin >> k;
        cout << k-273.15 << "c"<< endl;
        cout << ((k-273.15)*9/5)+32  << "f"<< endl;
    }
}
void distance(double m, double mi , double cm , double km ,  double ft ,double in ){
    string i;
    cin >> i;
    if(i=="m"){
        cin >> m;
        cout << m/1000 <<"km\n";
        cout << m*39.37 <<"in\n";
        cout << m*3.28084 <<"ft\n";
        cout << m*100 <<"cm\n";

    }
    else if(i=="km"){
        cin >> km;
        cout << km*1000 <<"m\n";
        cout << km*39370.1 <<"in\n";
        cout << km*3280.84 <<"ft\n";
        cout << km*0.6213 <<"mi\n";
        cout << km*10000 <<"cm\n";
     }
    else if(i=="in"){
        cin >> in;
        cout << in*1000 <<"m\n";
        cout << in*39370.1 <<"in\n";
        cout << in*3280.84 <<"ft\n";
        cout << in*0.6213 <<"mi\n";
        cout << in*10000 <<"cm\n";
     }
    else if(i=="ft"){
        cin >> ft;
        cout << ft*3.280 <<"m\n";
        cout << ft*3280 <<"km\n";
        cout << ft*12 <<"in\n";
        cout << ft*5280 <<"mi\n";
        cout << ft*30.48<<"cm\n";
     }
     else if(i=="mi"){
        cin >> mi;
        cout << mi*1609.344 <<"m\n";
        cout << mi*1.609344 <<"km\n";
        cout << mi*63360 <<"in\n";
        cout << mi*5280 <<"ft\n";
        cout << mi*160934.4<<"cm\n";
     }
     else if(i=="cm"){
        cin >> cm;
        cout << cm/100 <<"m\n";
        cout << cm/100000 <<"km\n";
        cout << cm*2.54 <<"in\n";
        cout << cm*30.48<<"ft\n";
        cout << cm*160934.4<<"cm\n";
     }



}
void storage(float mb, float kb , float gb, float tb){
    string i;
    cin >> i;
    if(i=="kb"){
        cin >> kb;
        cout << kb/1024 <<"Mb\n";
        cout << (kb/1024)/1024 <<"Gb\n";
        cout << ((kb/1024)/1024)/1024 <<"Tb\n";
    }
    else if(i=="mb"){
        cin >> mb;
        cout << mb*1024 <<"Kb\n";
        cout << mb/1024 <<"Gb\n";
        cout << (mb/1024)/1024 <<"Tb\n";
    }
    else if(i=="gb"){
        cin >> gb;
        cout << gb*1024 <<"Kb\n";
        cout <<gb/1024 <<"Gb\n";
        cout << (gb/1024)/1024 <<"Tb\n";
    } 
    else if(i=="tb"){
        cin >> tb;
        cout << (tb/1024)/1024 <<"Kb\n";
        cout <<tb/1024 <<"Gb\n";
        cout << (tb/1024)/1024 <<"mb\n";
    } 
    else{
        cout << "invited "; 
    }

}
void time(int hr , int min , int sec , int days){
    string i;
    cin >> i;
    if(i=="min"){
        cin >>min;
        cout << min*60 <<"sec\n";
        cout << (min/60)/60<<"hr\n";
        cout << ((min/60)/60)/24 <<"day\n";
    }  
    if(i=="hr"){
        cin >>hr;
        cout << hr*60*60 <<"sec\n";
        cout << hr*60 <<"min\n";
        cout << hr/24 <<"day\n";
    }
    if(i=="sec"){
        cin >>sec;
        cout << sec/60 <<"min\n";
        cout << (sec/60)/60<<"hr\n";
        cout << ((sec/60)/60)/24 <<"day\n";
    } 
    if(i=="days"){
        cin >>days;
        cout << ((days*24)*60)*60 <<"min\n";
        cout << days*24 <<"hr\n";
        cout << ((days*24)*60)*60 <<"sec\n";
    }
}    
void speed(float kmh, float mph){
    string i;
    cin >> i;
    if(i=="kmh"){
        cin >>kmh;
        cout << kmh*0.621371 <<"mph\n";
    } 
    if(i=="mph"){
        cin >>mph;
        cout << mph/0.621371<<"kmh\n";
    } 
}
void mass(float kg, float lb , float oz , float g){
    string i;
    cin >> i;
    if(i=="kg"){
        cin >> kg;
        cout << kg*2.20462 <<"lb\n";
        cout << kg <<"oz\n";
        cout << ((kg/60)/60)/24 <<"g\n";
    } 
    if(i=="lb"){
        cin >> lb;
        cout << lb*2.20462 <<"lb\n";
        cout << lb <<"oz\n";
        cout << ((lb/60)/60)/24 <<"g\n";
    } 
}

 
int main()
{
    int req; 
cout <<"1- temperature" << endl << "2- distance " << endl <<"3- data storage" << endl << "4- time"<< endl <<"5- speed"<< endl;
cout <<"6- mass"<< endl <<"";
cout << "enter from 1 to 8 : "; 
cin >>  req ;
if(req == 1){
    void temperature(double c,double f,double k);
    cout << "enter the unit you have : "<< endl;
    string i;
    cin >> i;
}

    return 0;
} 
