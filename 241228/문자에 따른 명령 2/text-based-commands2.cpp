#include <iostream>
#include<string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x=0,y=0;
    string str;
    cin>>str;

    //동남서북 순서
    int offset[4][2]={{1,0},{0,-1},{-1,0},{0,1}};
    int dir=3;

    for(int i=0;i<str.size();i++){
        if(str[i]=='L'){
            dir=(dir-1+4)%4;
        }
        else if(str[i]=='R'){
            dir=(dir+1)%4;
        }
        else if(str[i]=='F'){
            x+=offset[dir][0];
            y+=offset[dir][1];
        }
    }
    cout<<x<<' '<<y;
    return 0;
}