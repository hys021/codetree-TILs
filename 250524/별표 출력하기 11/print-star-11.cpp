#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1;i<=2*n+1;i++){
        if(i%2!=0){
            for(int j=1;j<=2*n+1;j++){
                cout << "* ";
            }
        }
        else{
            for(int k=1;k<=n+1;k++){
                cout << "*   ";
            }
        }
        cout << endl;
    }
    // Please write your code here.
    return 0;
}