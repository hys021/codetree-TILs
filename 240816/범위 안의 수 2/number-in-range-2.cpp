#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int i=1,n,sum=0,cnt=0;
    while(i<=10){
        cin >> n;
        if(n>=0 && n<=200){
            sum+=n;
            cnt++;
        }
        i++;
    }
    double avg = (double)sum/cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}