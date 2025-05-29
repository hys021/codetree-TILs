#include <iostream>
using namespace std;

int main() {
    int n,cnt;
    cnt=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(i%2!=0){
                cout << cnt << " ";
                cnt++;
            }
            else{
                cout << cnt+n-1-2*j << " ";
                cnt++;
            }
        }
        cout << endl;
    }
    // Please write your code here.
    return 0;
}