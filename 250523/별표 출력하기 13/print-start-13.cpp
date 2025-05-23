#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1;i<=2*n;i++){
        if(i%2!=0){
            for(int j=(i+1)/2;j<=n;j++){
                cout << "* ";
            }
        }
        else{
            for(int k=i/2;k>0;k--){
                cout << "* ";
            }
        }
        cout << endl;
    }
    // Please write your code here.
    return 0;
}