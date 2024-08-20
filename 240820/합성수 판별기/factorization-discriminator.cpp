#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i=2;
    bool satisfied = false;
    cin >> n;
    while(i<n){
        if(n%i==0){
            satisfied = true;
        }
        i++;
    }
    if(satisfied==true){
        cout << "C";
    }
    else{
        cout << "N";
    }
    return 0;
}