#### 문제 접근 방식

n번째까지 합을 구한후 가진 돈과의 차에 따라 결과 리턴

합 구하는 공식 n (n+1)/2

#### 코드

```c++
#include<iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    answer=  static_cast<long long>(price) * ((count *(count +1))/2);
    
    return answer>money? answer - money : 0;
}
```

