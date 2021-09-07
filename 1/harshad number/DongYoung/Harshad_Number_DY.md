매개변수 x을 char*로 받아서 각 배열끼리 더한 값을 x로 나누어 떨어지는지 판별
    
    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    
    bool solution(int x) {
        bool answer = true;
    	int num =0;
    	char str[10]; // x는 10,000이하의 정수임으로 크기를 크게 잡을 필요가 없다.
    	for(int i=0; i<sprintf(str, "%d", x); i++)
    	{
        	num += (int)str[i] - '0';
    	}
    	answer = !(x%num);
    	return answer;
    }
