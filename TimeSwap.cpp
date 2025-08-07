#include <iostream>
#include <string>
using namespace std;
int main()
{
    string time;
    string type = time.substr(6, 2);
    string y;
    string i = time.substr(0, 2);
   // cout << " enter time like this : HH:MM-XX" << endl;
    //cout << "XX = AM/PM " << endl;
    //cin >> time;
    if (type == "AM")
    {
        cout << time << endl;
    }
    else if (type == "PM")
    {
        int x = stoi(i);
        x = x + 12;
        string y = time.erase(0, 2);
        cout << x << y << endl;
    }
    return 0;
}