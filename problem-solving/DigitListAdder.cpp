
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int n = 3;
    vector<int> l1(n), l2(n), result(n);
    int carry = 0;

    cout << "list 1:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> l1[i];
        if (l1[i] < 0 || l1[i] > 9) {
            cout << "Enter a number from 0 to 9" << endl;
            return 1;
        }
    }

    cout << "list 2:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> l2[i];
        if (l2[i] < 0 || l2[i] > 9) {
            cout << "Enter a number from 0 to 9" << endl;
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        int sum = l1[i] + l2[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    
    
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i < n - 1) cout << ",";
    }
    if (carry > 0) cout << "," << carry;
    cout << "]" << endl;

    return 0;
}
