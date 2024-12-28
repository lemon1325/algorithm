#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int offset[4][2]={{-1,0},{0,-1},{0,1},{1,0}};

    int x=0,y=0;
    char c_dir;
    int dist,dir;
    for(int i=0;i<n;i++){
        cin>>c_dir>>dist;

        if(c_dir=='W')
            dir=0;
        else if(c_dir=='S')
            dir=1;
         else if(c_dir=='N')
            dir=2;
        else if(c_dir=='E')
            dir=3;
        

        x+=offset[dir][0]*dist;
        y+=offset[dir][1]*dist;
        
        }
    cout<<x<<' '<<y;
    return 0;
}

