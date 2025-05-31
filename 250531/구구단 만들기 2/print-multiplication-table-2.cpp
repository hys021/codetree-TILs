#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a>> b;
        for(int k=2;k<=8;k+=2){            
            for(int j=b;j>=a;j--){
                cout << j << " * " << k << " = " << j*k;
                if(j!=a){
                    cout << " / ";
                }
            }
        cout << endl;
        }
    // Please write your code here.
    return 0;
}