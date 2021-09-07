#### 문제 접근 방식

1~ n까지의 수에서 각 숫자의 배수를 제외한 나머지가 소수

2 ,4, 6, 8 .. 식으로 제외

#### 코드

```c++
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<bool> numVec(n,true);
     
    
    numVec[0] =false;   // 1 제외
    
    
    for(int i=2;i<n;++i)
    {
        //ex) 배수부터 시작 2일때 numVec[3] 
        for (int j = i * 2 - 1; j < n; j += i)
		{
			numVec[j] = false;
		}
    }
    
    
    for(int i=0;i<n;++i)
    {
        if(numVec[i])
            ++answer;
    }
    
    return answer;
}
```



리뷰

처음엔 숫자마다 소수를 체크해서 효율성에서 시간초과로 계속 났었다.

테이블 형식을 계속 깜빡했다.

