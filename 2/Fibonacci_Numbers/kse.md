#### 문제 접근 방식

F(n) =F(n-1) + F(n-2) 의 값을 배열에 저장해서 이용

#### 코드

```c++
using namespace std;

int solution(int n) {
    int answer = 1234567;

    int FibonacciArr[100001] ={0,};
    
    FibonacciArr[0]=0;
    FibonacciArr[1]=1;
    
    for(int i=2;i<=n;++i)
    {
        FibonacciArr[i] = (FibonacciArr[i-1]+ FibonacciArr[i-2])%answer;
    }
    
    return  FibonacciArr[n];
}
```





