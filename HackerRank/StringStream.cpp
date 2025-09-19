#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int>v;
    stringstream ss(str);
    char skip;
    int n;
    while(ss){
        if(ss.peek() !=','){
            if(ss>>n){
                v.push_back(n);
            }
        }
        else{
            ss >> skip;
        }
    }
    return v;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    int size =integers.size();
    for(int i = 0; i < size; i++) {
        cout << integers[i] <<endl;
    }
    
    return 0;
}
