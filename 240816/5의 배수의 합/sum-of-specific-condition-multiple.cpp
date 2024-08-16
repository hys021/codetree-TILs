#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum=0;
    cin >> a >> b;
    if(a<b){
    while(a<=b){
        if(a%5==0){
            sum+=a;
        }
            a++;
        }
    }
    else if(b<a){
        while(b<=a){
            if(b%5==0){
                sum+=b;
            }
            b++;
        }
    }
    cout << sum;
    return 0;
}