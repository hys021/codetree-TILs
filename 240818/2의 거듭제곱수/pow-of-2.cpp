#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    cin >> n;
    while(n!=1){
        n/=2;
        cnt++;
    }
    cout << cnt;
    return 0;
}