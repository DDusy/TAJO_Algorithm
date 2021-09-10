## 시저 암호

vector<char> 사용하여 하나씩 밀은 char를 넣은 후 마지막에 다시 문자열로 배출.
아스키 126 넘으니까 오류 터지는거 처음 알음

코드는 보기 편하게 중괄호 밑으로 내림

```c++
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";

    vector<char> temp;
    for(int i = 0; i < s.length(); i++)
    {
        temp.push_back(s[i]);

        if(s[i] >= 65 && s[i] <= 90)
        {
            temp[i] += n;
            if(temp[i] > 90) temp[i] -= 26;
        }
        else if(s[i] >= 97 && s[i] <= 122)
        {
            if((temp[i] + n) > 122)
            {
                temp[i] = 97 + (n - (123 - s[i]));
            }
            else temp[i] += n;
        }
        else continue;
    }
    for(char c : temp) answer.push_back(c);

    return answer;
}
```