#### 문제 접근 방식

각각의 자릿수를 구하기 위해 10으로 나누고 몫이 0이 될때까지 나머지를 누적했다.

#### 코드

```c++
#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    while(n!=0)
    {
        answer += n%10;
        n/=10;
    }
    
    return answer;

}
```

