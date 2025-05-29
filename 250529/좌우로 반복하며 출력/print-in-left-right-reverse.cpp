#include <iostream>
using namespace std;

int main() {
    int n,cnt;
    cin >> n;
    cnt=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2!=0){
                cout << j;
            }
            else{
                cout << cnt;
                cnt--;
                if(cnt==0){
                    cnt=n;
                }
            }
        }
           cout << endl;
    }
    // Please write your code here.
    return 0;
}