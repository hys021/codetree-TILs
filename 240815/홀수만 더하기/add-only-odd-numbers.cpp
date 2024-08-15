#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a,sum=0;
    cin >> n;
    int i=1;
    while(i<=n){
        cin >> a;
        if(a%2!=0 && a%3==0){
            sum += a;
        } 
        i++;
    }
    cout << sum;
    return 0;
}