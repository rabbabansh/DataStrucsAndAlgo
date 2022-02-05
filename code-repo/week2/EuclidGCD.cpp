#include<iostream>
using namespace std;

int EuclidGCD(int a, int b) {
    if (b == 0){
        return a;
    }
    int ap = a % b;
    return EuclidGCD(b, ap);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << EuclidGCD(a, b) << endl;
    return 0;
}