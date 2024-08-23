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
        }
        i++; 
    }
    if(satisfied==true){
        cout << "1";
    }
    else{
        cout << "0";
    }
    return 0;
}