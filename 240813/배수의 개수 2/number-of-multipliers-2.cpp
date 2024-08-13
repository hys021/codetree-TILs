#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;   
    for(int i=1;i<=10;i++){
        cin >> n;
        if(n%2!=0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}