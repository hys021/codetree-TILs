#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float l,r;
    cin >> l >> r;
    if(l>=1.0 && r>=1.0){
        cout << "High";
    }
    else if((l>=0.5 && l<1.0)&&(r>=0.5 && r<1.0)){
        cout << "Middle";
    }
    else{
        cout << "Low";
    }
    return 0;
}