#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=1;j<=i;j++){
                cout << "*";
            }
        }
        else{
            for(int j=1;j<=2*n-i;j++){
                cout <<"*";
            }
        }
        cout << endl << endl;
    }
    return 0;
}