#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    bool satisfied = false;
    cin >> a >> b;
    while(a<=b){
        if(1920%a==0 && 2880%a==0){
            satisfied=true;
        }
        a++;
    }
    if(satisfied==true){
        cout << "1";
    }
    else{
        cout << "0";
    }
    return 0;
}