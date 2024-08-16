#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    cin >> n;
    int div=n;
    for(int i=1;i<=n;i++){
        div/=i;
        cnt++;
        if(div <= 1){
            cout << cnt;
            break;
        }
    }
    return 0;
}