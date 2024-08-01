#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int c1,c2,c3;
    int Acount=0;
    char s1,s2,s3;
    cin >> s1 >> c1 >> s2 >> c2 >> s3 >> c3;
    if(s1=='Y' && c1>=37){
        Acount++;
    }
    if(s2=='Y' && c2>=37){
        Acount++;
    }
    if(s3=='Y' && c3>=37){
        Acount++;
    }
    if(Acount>=2){
        cout << "E";
    }
    else{
        cout << "N";
    }
    return 0;
}