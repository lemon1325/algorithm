#include <iostream>
#include<vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int offset[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

    vector<vector<int>>board(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            board[i][j]=num;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int count=0;
            for(int dir=0;dir<4;dir++){
                int x=i+offset[dir][0];
                int y=j+offset[dir][1];
                
                if(x>=0 && x<n && y>=0 && y<n && board[x][y]==1)
                    count++;
            }
            if(count>=3) sum++;
        }
    }
    cout<<sum;
/*
    for(auto a:board){
        for(auto v:a){
            cout<<v<<' ';
        }
        cout<<endl;
    }*/

    return 0;
}