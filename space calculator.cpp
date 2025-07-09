#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

//functions :
 
 float square( float l ) {
      return  l* l ;
    } 
    
 //=====================================
 
 float rectangular( float l , float p  ) {
      return  l* p ;
    } 
 //====================================== 
     
 float triangle( float l , float p  ) {
      return  (l* p)/2  ;
    }  
    
 //======================================
 
 float circle(float   r , float pi ) {
      return  pi*r*r; 
    }    
    
 //======================================
 
 float certain( float d1 ,  float d2 ) {
      return  d1 * d2 * (1/2) ;
    }
 //======================================   
int main() {
     float pi = 3.1415926535897 ; 
     float l , h ,p , d1 ,d2 , r ; 
  cout << " what shape you want to Calculate hir area : \n";
  cout << " 1/ square \n" << "2/ rectangular\n" << "3/ triangle\n" 
          << "4/ circle\n" << "6/ certain\n" ;
  string order  ; 
  cin >> order ; 
    if (order == "square") {
        cout << "enter The length of the square :  \n " ;
            cin >> l ; 
        float  s = square(l);
            cout << "the  area of" << order << "is " << s << endl; 
    }        
    
    //==============================================
     
    else if (order == "rectangular") {
        cout << "enter The length of the rectangular :  \n " ;
             cin >> l ; 
         cout << "enter The width of the rectangular :  \n " ;
             cin >> p ;
                float  s = rectangular(l, p);
                     cout << "the  area of"  << order << "is " << s << endl; 
    }
    
    //==============================================
    
    else if (order == "circle") {
       cout << "enter The radius of circle  :  \n " ;
           cin >> r;
        float  s = circle(r, pi);
             cout << "the  area of"  << order << "is " << s << endl;
    }
    
    //=================================================
             
    else if (order == "triangle") {
       cout << "enter The height of triangle  :  \n " ; 
           cin >> l; 
       cout << "enter The width of triangle  :  \n " ;
           cin >> p; 
        float  s = triangle(l, p);
             cout << "the  area of"  << order << "is " << s << endl;
    }                  
    
    //==================================================
    
    else if (order == "certain") {
       cout << "enter the  first diameter of certain  :  \n " ; 
           cin >> d1; 
       cout << "enter the second diameter of certain  :  \n " ;
           cin >> d2; 
        float  s = certain(d1, d2);
             cout << "the  area of"  << order << "is " << s << endl;
    }
    else {
        cout << "\t\n";
    }
                      
 return 0;
}