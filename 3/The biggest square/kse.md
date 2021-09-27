#### 문제 접근 방식

1,1 부터 3방향을 검사하며 사각형 크기 확인 후 3개 중 가장 작은 수  +1 

가장 큰지 비교해가면서 사각형 사이즈를 찾고 사각형 사이즈니까 길이 * 길이

#### 코드

```c++
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<vector<int>> board)
{
    
    int answer = 1234;
    int iSizeX= board.size();
    int iSizeY= board[0].size();
    int max=0;
    
    if(iSizeX==1 || iSizeY ==1 ) return 1;
    
    for(int i=1;i<iSizeX ;++i)
    {
        for(int j=1;j<iSizeY;++j)
        {   
            
            if(board[i][j]) // 1일때
            { 
                int min = std::min( {board[i-1][j],board[i][j-1], board[i-1][j-1]} );
                
                board[i][j] = min+1;

               max = std::max(max, min+1);
               
            }
        }
        
         
    }
    
    return max*max ;
}
```





