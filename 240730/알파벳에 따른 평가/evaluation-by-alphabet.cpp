#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char s;
    cin >> s;
    if(s=='S'){
        cout << "Superior";
    }
    else if(s=='A'){
        cout << "Excellent";
    }
    else if(s=='B'){
        cout << "Good";
    }
    else if(s=='C'){
        cout << "Usually";
    }
    else if(s=='D'){
        cout << "Effort";
    }
    else{
        cout << "Failure";
    }
    return 0;
}