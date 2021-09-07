#### 문제 접근 방식

해시맵을 이용해 선수이름을 키값으로 사용하고 참가자,완주자 연산

나머지는 완주하지 못한 선수

#### 코드

```c++
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string,int> map_CheckTable;
    
    for(auto pName:participant){map_CheckTable[pName]++;}
    for(auto pName:completion){map_CheckTable[pName]--;}
   
    for(auto pInfo:map_CheckTable)
    { if(0!= pInfo.second)
        {
            return pInfo.first;
        }
     }
    
    
    
    return answer;
}
```

