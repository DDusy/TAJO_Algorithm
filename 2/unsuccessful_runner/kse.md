#### 문제 접근 방식

약수는 나머지가 0 

#### 코드

```c++
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1;i<=n;++i)
    {
        if(n%i == 0)
            answer+=i;
    }
    
    return answer;
}
```

