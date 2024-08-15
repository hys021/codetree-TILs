#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum=0,cnt=0;
    cin >> a >> b;
    while(a<=b){
        if(a%5==0 || a%7==0){
            sum += a;
            cnt++;
        }
        a++;
    }
    double avg = (double)sum/cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}