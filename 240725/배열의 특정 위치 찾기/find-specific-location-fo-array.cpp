#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum=0,cnt=0;
    double thirdsum=0,avg=0;

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=1;i<10;i+=2){
        sum+=arr[i];
    }
    for(int i=0;i<10;i++){
        if((i+1)%3==0){
            thirdsum += arr[i];
            cnt++;
        }
    }
    avg = thirdsum / cnt;
    cout << sum << " " << fixed << setprecision(1) << avg;
    return 0;
}