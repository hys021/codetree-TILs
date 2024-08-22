#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    bool satisfied=false;
    cin >> a >> b >> c;
    while(a<=b){
        if(a%c==0){
            satisfied=true;
        }
        a++;
    }

    if(satisfied==true){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}