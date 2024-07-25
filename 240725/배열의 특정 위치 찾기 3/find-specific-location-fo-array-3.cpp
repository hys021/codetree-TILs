#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int sum=0;
    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i] == 0){
            for(int j=i-1;j>i-4;j--){
                sum+=arr[j];
            }
            cout << sum;
            break;
        }
    }
    return 0;
}