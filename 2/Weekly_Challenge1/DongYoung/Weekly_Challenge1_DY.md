```
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    long long pay = 0;
    for(int i=1; i<=count; i++)
    {
        pay += i * price;
    }
    answer = pay - money;
    if(answer < 0) answer = 0;
    return answer;
}
```

