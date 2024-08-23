#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int i=1,n;
    bool satisfied=false;
    while(i<=5){
        cin >> n;
        if(n%3==0){
            satisfied=true;
        }
        else{
            satisfied=false;
            cout << "0";
            break;
        }
        i++; 
    }
    if(satisfied==true){
        cout << "1";
    }
    return 0;
}