#include <iostream>
#include<vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;

    vector<vector<int>>board(n,vector<int>(m,0));

    //(0,0)부터 시작해서 벽에 부딪히면 
    //오른쪽으로 회전
    //동남서북 방향
    int offset[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int dir=0;
    int x=0,y=0;
    board[0][0]=1;
    for(int i=2;i<=n*m;i++){
        int x1=x+offset[dir][0];
        int y1=y+offset[dir][1];
        if(x1>=0 && x1<n && y1>=0 && y1<m && board[x1][y1]==0)
            board[x1][y1]=i;
        else{
            dir=(dir+1)%4;
            x1=x+offset[dir][0];
            y1=y+offset[dir][1];
            if(x1>=0 && x1<n && y1>=0 && y1<m && board[x1][y1]==0)
                board[x1][y1]=i;
        }
        x=x1;
        y=y1;
    }
    for(auto a:board){
        for(auto v:a)
            cout<<v<<' ';
        cout<<endl;
    }
    
    return 0;
}