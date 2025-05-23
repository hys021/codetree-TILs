#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i=1;i<=N;i++){
        for(int j=N-1; j>=i;j--){
            cout << " " << " ";
        }
        for(int k=0;k<i;k++){
            cout << "@" << " ";
        }
        cout << endl;
    }
    for(int i=0;i<N-1;i++){
        for(int j=i; j<N-1; j++){
            cout << "@ ";
        }
        cout << endl;
    }
    // Please write your code here.
    return 0;
}