#include <iostream>
using namespace std;

int main() {
    int n,cnt;
    cnt = 1;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << 2*cnt << " ";
            cnt++;
            if(cnt == 5){
                cnt = 1;
            }
        }
        cout << endl;
    }
    // Please write your code here.
    return 0;
}