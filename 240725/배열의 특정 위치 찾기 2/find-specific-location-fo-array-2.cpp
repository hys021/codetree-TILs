#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int even=0,odd=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i<10;i+=2){
        odd+=arr[i];
    }
    for(int i=1;i<10;i+=2){
        even+=arr[i];
    }
    if(odd>even){
        cout << odd-even;
    }
    else{
        cout << even-odd;
    }
    return 0;
}