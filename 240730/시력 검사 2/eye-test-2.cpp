#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float avg;
    cin >> avg;
    if(avg >= 1.0){
        cout << "High";
    }
    else if(avg>=0.5 && avg<1.0){
        cout << "Middle";
    }
    else{
        cout << "Low";
    }
    return 0;
}