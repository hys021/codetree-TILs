#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    int max=a;
    if(max<b){
        max = b;
        if(max < c){
            max = c;
            cout << b;
        }
        else if(max>c){
            if(a>c){
                cout << a;
            }
            else{
                cout << c;
            }
        }
    }
    else if(max>b){
        if(max<c){
            max = c;
            cout << a;
        }
        else if(max>c){
            if(b>c){
                cout << b;
            }
            else{
                cout << c;
            }
        }
    }
    return 0;
}