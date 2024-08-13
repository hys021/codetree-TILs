#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        if(i%3==0||i==3||i==6||i==9){
            cout << 0 << " ";
        }
        else{
            cout << i << " ";
        }
        i++;
    }
    return 0;
}