#### 문제 접근 방식

최대 공약수는 두 수의 공통된 가장 큰 약수 이므로 나머지 연산을 이용해 최대 공약수 찾기

최대 공약수를 뺀 나머지를 나머지 수의 곱 n * m/(최대 공약수) 

#### 코드

```c++
#include <vector>

using namespace std;

int GCD(int _a,int _b){
    
    while(1)
    {
        int res = _a%_b;
        
        if(res==0) return _b;
		
        _a = _b;
        _b = res;
    }
}

vector<int> solution(int n, int m) {
    vector<int> answer;
        
    answer.push_back(GCD(n,m));
    answer.push_back(n * m/answer[0]);
    
    return answer;
}
```

