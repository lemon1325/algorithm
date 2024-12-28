#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,t,r,c;//크기, 시간, 시작위치
    char d;//방향
    cin>>n>>t>>r>>c>>d;
    //오, 위, 왼, 아래
    int offset[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int dir;
    if(d=='R')
        dir=0;
    else if(d=='L')
        dir=2;
    else if(d=='U')
        dir=1;
    else if(d=='D')
        dir=3;
    
    for(int i=0;i<t;i++){
        
        int x=r+offset[dir][0];
        int y=c+offset[dir][1];
        if(x>0 && x<=n && y>0 && y<=n){
            r=x;
            c=y;
        }
        else{
            dir=(dir+2)%4;
        }
    }
    cout<<r<<' '<<c;
    return 0;
}