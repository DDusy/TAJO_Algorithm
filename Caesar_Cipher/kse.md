#### 문제 접근 방식

대소문자 구분 후 n을 더해 전체 알바벳 수로 나눠 나머지와 a/A와 연산

#### 코드

```c++
#include <string>

using namespace std;

string solution(string s, int n) 
{
    string answer = "";

    int iSize = s.length();
    char chStart=' ';
    
    for(int i=0;i<iSize;++i)
    {
        if(s[i]!=' ')
        {
       
             if(s[i]>='a'&& s[i]<='z')
            {
                chStart='a';
            }
            else
            {
                chStart='A';
            }
             answer +=((s[i] - chStart+n) % 26)+chStart;

        }
        else
        {
            answer+= s[i];   
        }
    }
    
    return answer;
}
```

