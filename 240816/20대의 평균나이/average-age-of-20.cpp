#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,sum=0,cnt=0;
    while(true){
        cin >> n;
        if(n<20||n>=30){
            break;
        }
        sum+=n;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);
    double avg = (double)sum/cnt;
    cout << avg;
    return 0;
}