#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum=0;
    while(n<=100){
        sum+=n;
        n++;
    }
    cout << sum;
    return 0;
}