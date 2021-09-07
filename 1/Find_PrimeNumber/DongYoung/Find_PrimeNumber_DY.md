"에라토스테네스의 체"를 검색해서 참고함 (...)
    

    #include <string>
    #include <vector>
    
    using namespace std;
    
    int solution(int n) {
        int answer = 0;
        
    	bool isPrim[1000000]; // 해당 배열의 숫자가 소수인지 확인하는 변수 
    	for(int i=0; i<n; i++)
    	{
      	  isPrim[i] = true; // 변수 선언할 때 초기화 안 되길래 이렇게함
    	}
    	isPrim[0] = false; // 1은 제외
    
        // 2부터 시작 ~ n의 제곱근까지 확인
    	for(int i=2; i*i<=n; i++)
    	{
    	   // n의 약수 중 1과 그 다음 가장 작은 약수를 제외한 나머지 수부터 전부 거른다
     	   for(int j=i*i; j<=n; j+=i)
      	   {
         	   isPrim[j - 1] = false;
      	   }
    	}
    	
    	for(int i=0; i<n; i++)
    	{
      	  if(isPrim[i]) answer++;
    	}
    	return answer;
    }
"소수인지 확인하려는 숫자(n)의 제곱근까지만 확인한다."가 가장 중요한 부분.

숫자를 전부 확인했을 땐, 정확성에서 만점이 나왔으나 효율성에선 0점이였다.