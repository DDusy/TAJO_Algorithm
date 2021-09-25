```
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int i=0; i<participant.size() -1; i++)
    {
        if(participant.at(i) != completion.at(i))
            return participant.at(i);
    }
    
    return participant.at(participant.size()-1);
}
```

