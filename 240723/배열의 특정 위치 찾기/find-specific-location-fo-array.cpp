#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum=0;
    double avg=0.0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=1;i<10;i+=2){
        sum += arr[i];
    }
    for(int i=0;i<10;i++){
        if((i+1)%3==0){
            avg += arr[i];
        }
    }
    cout << sum << " " << avg/3;
    return 0;
}