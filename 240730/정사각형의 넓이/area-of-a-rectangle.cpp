#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int s = n*n;
    if(n<5){
        cout << s << endl << "tiny";
    }
    else{
        cout << s;
    }
    return 0;
}