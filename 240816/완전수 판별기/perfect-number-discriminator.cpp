#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,sum=0;
    int i=1;
    cin >> n;
    while(i<n){
        if(n%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum == n){
        cout << "P";
    }
    else{
        cout << "N";
    }
    return 0;
}