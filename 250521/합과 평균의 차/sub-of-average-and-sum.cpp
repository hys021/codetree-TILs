#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int sum=0,avg=0;
    cin >> a >> b >> c;
    sum = a+b+c;
    avg = sum/3;
    cout << sum << "\n" << avg << "\n" << sum-avg;
    // Please write your code here.
    return 0;
}