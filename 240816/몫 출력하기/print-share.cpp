#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    while(true){
        cin >> n;
        if(n%2==0){
            cout << n/2 << endl;
            cnt++;
        }
        if(cnt==3){
            break;
        }
    }
    return 0;
}