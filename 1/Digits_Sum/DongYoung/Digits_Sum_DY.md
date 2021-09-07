매개변수 n을 char*로 받아서 각 배열끼리 더했다.
    
    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    
    int solution(int n) {
        int answer = 0;
        char str[10];
    	for(int i=0; i<sprintf(str, "%d", n); i++)
    	{
        	answer += (int)str[i] - '0';
    	}
    	return answer;
    }




itoa()가 안 된다