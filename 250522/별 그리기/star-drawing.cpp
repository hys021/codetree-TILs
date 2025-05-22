#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        for(int k=n-1; k>i; k--){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<n-1;i++){
        for(int k=0; k<=i; k++){
            cout << " ";
        }
        for(int j=0; j<n-2*i; j++){
            cout << "*";  
        }
        cout << endl;
    }

    // Please write your code here.

    return 0;
}
