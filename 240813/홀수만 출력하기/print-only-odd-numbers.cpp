#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a;
        if(a%3==0 && a%2!=0){
            cout << a << endl;
        }
    }

    return 0;
}