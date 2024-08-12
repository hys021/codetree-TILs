#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    while(a<=b){
        if(a%2==0){
            cout << a << " ";
            a+=3;
        }
        else{
            cout << a << " ";
            a*=2;
        }
    }
    return 0;
}