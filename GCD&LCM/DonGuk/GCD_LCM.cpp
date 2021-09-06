#include "stdafx.h"
#include "GCD_LCM.h"

void Solution_GCDLCM()
{
	int a, b;

	cin >> a >> b;

	int gcd = 1;
	int lcm = 1;

	// 유클리드 호제법을 위해 큰 수와 작은 수 구분
	int max = a > b ? a : b;
	int min = a > b ? b : a;

	// a와 b의 나머지를 구함
	// 나머지가 0 ==> 그 순간의 b가 최대 공약수
	// 나머지가 0이 아님 ==> b와 a%b의 나머지를 구함
	// 무한 반복
	while (min != 0)
	{
		gcd = max % min;
		max = min;
		min = gcd;
	}

	// 최대공약수 구하기
	gcd = max;

	// 각 수를 최대공약수로 나눈 후 결과값들과 최대공약수의 곱 => 최소공배수
	/*
	  2 | 12 28
	  2 |  6 14
        |  3  7

	  최대공약수 = 4
	  최소공배수 = 4 * 3 * 7 = 84
	*/
	max = a / gcd;
	min = b / gcd;
	lcm = gcd * max * min;

	cout << gcd << " // " << lcm;
}