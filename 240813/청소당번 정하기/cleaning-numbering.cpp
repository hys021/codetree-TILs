#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cr=0,hall=0,rest=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cr++;
        }
        if(i%3==0){
            hall++;
        }
        if(i%12==0){
            rest++;
        }
        if(i%2==0 && i%3==0){
            cr--;
        }
        if(i%3==0 && i%12==0){
            hall--;
        }
    }
    cout << cr << " " << hall << " " << rest;
    return 0;
}