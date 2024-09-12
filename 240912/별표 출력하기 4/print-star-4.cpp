#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=i;j<=n;j++){
                cout << "* ";
            }
            cout << endl;
        }
        else{ //65 765  8765 98765
            for(int j=i;j>=n;j--){
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}