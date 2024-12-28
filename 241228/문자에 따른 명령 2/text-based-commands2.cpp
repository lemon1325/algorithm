#include <iostream>
#include<string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x=0,y=0;
    string str;
    cin>>str;

    //동서남북 순서
    int offset[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
    int dir=3;

    for(int i=0;i<str.size();i++){
        if(str[i]=='L'){
            dir=1;
        }
        else if(str[i]=='R'){
            dir=0;
        }
        else if(str[i]=='F'){
            x+=offset[dir][0];
            y+=offset[dir][1];
        }
    }
    cout<<x<<' '<<y;
    return 0;
}