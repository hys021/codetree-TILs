#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i=1,cnt=0;
    bool satisfied = false;
    cin >> n;
    while(i<=n){
        if(n%i==0){
            cnt++;
        }
        i++;
    }
    if(cnt == 2){
        cout << "P";
    }
    else{
        cout << "C";
    }
    return 0;
}