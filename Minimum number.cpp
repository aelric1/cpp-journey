    #include <iostream>
    #include <vector>

    using namespace std;

    int main() {
        int num;
        vector<int> list = {};
        cout << " enter numbers (enter negative int to break) :"<< endl;

    while(true){
      cout <<"::";
            cin >> num;
            if(num<0) break;
                list.push_back(num);
         }
    int min = list[0];
    for(int i=1 ; i< list.size() ; i++){
        if(list[i] < min){
            min=list[i];
        }
    }
    cout << "Minimum number is: " << min << endl;

        return 0; 
    }
