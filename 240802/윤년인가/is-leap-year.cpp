#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    if(y%4==0 && (y%100 && y%400)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}