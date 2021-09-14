#### 문제 접근 방식

재귀를 이용해서 +,-을  numbers의 각 인덱스 마다 실행

타겟 넘버와 총합이 같으면 방법수 +1 

#### 코드

```c++
#include <string>
#include <vector>

using namespace std;

int answer=0;

// target : 찾는 숫자 sum : 총합     count : 현재 인덱스
void Search(vector<int>& numbers, int target, int sum, int count)
{
    // target을 찾거나
    if (count == numbers.size())        // 마지막일때
    {
        if (sum == target) answer++;     //값이 같으면 
        
        return;
    }
        
        Search(numbers, target, sum + numbers[count], count + 1); 
        Search(numbers, target, sum - numbers[count], count + 1);
}

int solution(vector<int> numbers, int target) 
{
    Search(numbers, target, 0, 0);
    
    return answer;
}
```



컬러 숫자 찾기처럼 재귀를 이용해서 풀어봤다.
