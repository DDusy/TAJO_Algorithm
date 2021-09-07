매개변수로 받아온 s에 n을 배열 하나하나씩 넣었다.

Z/z가 마지막 임으로 해당 값보다 커진다면 A/a로 돌아가야된다.    

    #include <iostream>
    #include <string>
    #include <vector>
    
    using namespace std;
    
    string solution(string s, int n) {
        string answer = "";
    	for(int i=0; i< s.length(); i++)
    	{
     	   if(s[i] == ' ') continue; // 공백은 아무리 밀어도 공백입니다.
        
       	   int _temp = 0;
       	   _temp += n;
           if(s[i] <= 'Z')
          {
              if(_temp + s[i] > 'Z') _temp -= 26; // Z가 넘어가면 다시 A로
          }
          else
          {
              if(_temp + s[i] > 'z') _temp -= 26; // z가 넘어가면 다시 a로
          }
          // ASCII 코드 값이 126보다 크면 오류가 생겨 (z + 10 -> error)
          // temp로 계산한 뒤 마지막에 s[i]에 더함
          s[i] += _temp; 
         }
    
         answer = s;
         return answer;
    }
(int)char + int 값이 126을 넘어가면 오류가 발생하는 걸 처음 봤다. 