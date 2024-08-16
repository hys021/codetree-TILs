#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int prod = a;
    for(int i=1;i<b;i++){
        prod*=a;
    }
    if(b==0){
        prod=1;
    }
    cout << prod;
    return 0;
}