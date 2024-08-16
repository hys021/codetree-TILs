#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    cin >> n;
    while(true){
        if(n==1){
            break;
        }
        if(n%2==0){
            n/=2;
            cnt++;
        }
        else if(n%2!=0){
            n = n*3+1;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}