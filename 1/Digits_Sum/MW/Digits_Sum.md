## 자릿수 더하기

10으로 나눠가면서 몇 자리수인지 먼저 파악함.
이후에 자릿수 만큼만 for문을 돌려서 10으로 나눈 나머지를 반환용 변수에 더해가고, 완료되면 반환.

```c++
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n)
{
    int answer = 0;
    int size = 1;
    int temp = n;

    for(int i = 0; i < 9; i++)
    {
        int a = pow(10, i);

        if(n / a >= 10) continue;
        else
        {
            size = i + 1;
            break;
        }
    }

    for(int i = size; i > 0; i--)
    {
        int a = pow(10, (i - 1));
        if((temp / a) < 1) continue;
        int k = temp / a;
        temp = temp - (k * a);
        answer += k;
    }

    return answer;
}
```
