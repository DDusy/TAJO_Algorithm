최대공약수는 거듭제곱을 이용해서,

최소공배누는 소인수분해를 이용해서 값을 구했다.

매개변수 두 숫자를 i로 나눠서 둘 다 나눠떨어지는 i 중에 가장 큰 i -> 최대 공약수

매개변수 두 숫자를 최대 공약수로 나누고 전부 곱하기



```
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
	int GCD = 0, LCM = 0;
	for(int i=1; i< (n > m ? n: m); i++)
	{
 	   if(n%i == 0 && m%i == 0 && GCD < i) GCD = i; 
	}
	n /= GCD; m /= GCD;
	LCM = n * m * GCD;
	answer.push_back(GCD);
	answer.push_back(LCM);
	return answer;
}
```


문제보다 vector 어떻게 쓰는지 한참을 생각했다.