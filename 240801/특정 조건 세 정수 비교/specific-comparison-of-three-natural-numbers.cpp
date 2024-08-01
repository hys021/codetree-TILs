#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    int arr[3];
    for(int i=0;i<3;i++){
        cin >> arr[i];
    } 
    int min = arr[0];
    for(int i=1;i<3;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << (arr[0] == min) << " " << (a==b==c);

    return 0;
}