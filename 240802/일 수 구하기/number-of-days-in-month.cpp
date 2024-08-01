#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
        cout << "31";
    }
    else if(n==4 || n== 6 || n==9 || n==11){
        cout << "30";
    }
    else{
        cout << "28";
    }
    return 0;
}