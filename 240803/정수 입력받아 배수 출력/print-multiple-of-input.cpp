#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=n;i<n*5+1;i+=n){
        cout << i << " ";
    }
    return 0;
}