#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,i=1,a,cnt=0,sum=0;
    cin >> n;
    while(i<=n){
        cin >> a;
        sum += a;
        cnt++;
        i++;
    }
    cout << fixed;
    cout.precision(1);
    double avg = (double)sum/cnt;
    cout << sum << " " << avg;
    return 0;
}