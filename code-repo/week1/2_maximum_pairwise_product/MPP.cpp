#include <iostream>
#include <vector>

using namespace std;

int mpp(const vector<int>& num) { 
    int hi = 0, sechi = 0;
    for (int i=0; i<num.size(); i++) {
        if (num[i] > hi) {
            sechi = hi;
            hi = num[i];
        }
        else if (num[i] > sechi) {
            sechi = num[i];
        }
    }
    return sechi * hi;
}

int main() {
    int n;
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cout << mpp(num) << endl;

    return 0;
}