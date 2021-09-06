#### 문제 접근 방식

각각의 자릿수를 더하기 위해 10으로 나누고 나머지를 누적

총 합산으로 하샤드 숫자 판별

#### 코드

```c++
#include <string>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int iTotal=0;
    int inum=x;
    
    while(inum)
    {
        iTotal +=inum%10;
        inum/=10;
    }

    return x%iTotal ==0? true :false;

}
```

