#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"
#include "Q2.h"

void InputFunc(vector<int>& vec)
{
	const int maxLen = 100;			// (1 ~ maxLen개)
	const int maxNumber = 1000;		// (0 ~ maxNumber-1)

	int len = 0;
	int n = 0;

	srand((unsigned int)time(NULL));

	len = rand() % maxLen + 1;

	for (int i = 0; i < len; ++i)
	{
		n = rand() % maxNumber;
		vec.push_back(n);
	}
}

void Sol1(vector<int>& numbers)
{
	// 비교를 위해
	// 배열 모든 원소를 규칙에 맞게 더하여 횟수 계산
	long iAnswer = 0;

	long iIdx = 0;
	long iSize = numbers.size();
	long iMax = 0;
	long iMin = 0;

	while (true)
	{
		iIdx = max_element(numbers.begin(), numbers.end()) - numbers.begin();
		iMin = *min_element(numbers.begin(), numbers.end());
		iMax = numbers[iIdx];

		if (iMax == iMin)
			break;

		for (int i = 0; i < iSize; ++i)
		{
			if (i == iIdx)
				continue;

			++numbers[i];
		}

		++iAnswer;
	}

	cout << iAnswer << endl;
}

void Solution_Q2()
{
	/*
	10 11 16 20 25
	15 16 21 25 25  //  +5(First == Second) => First - Second

	16 17 22 25 26
	17 18 23 26 26
	18 19 24 26 27
	19 20 25 27 27
	20 21 26 27 28
	21 22 27 28 28
	22 23 28 28 29
	23 24 29 29 29  //  +8(First == Second == Third) => (Second - Third) * 2

	24 25 29 30 30
	25 26 30 30 31
	26 27 31 31 31
	27 28 31 32 32
	28 29 32 32 33
	29 30 33 33 33
	30 31 33 34 34
	31 32 34 34 35
	32 33 35 35 35
	33 34 35 36 36
	34 35 36 36 37
	35 36 37 37 37
	36 37 37 38 38
	37 38 38 38 39
	38 39 39 39 39  //  +15(First == Second == Third == Fourth) => (Third - Fourth) * 3

	39 39 40 40 40
	40 40 40 41 41
	41 41 41 41 42
	42 42 42 42 42  //  +4(First == Second == Third == Fourth == Fifth) => (Fourth - Fifth) * 4

	=>
	num을 내림차순으로 정렬 후
	0~num.length-1까지 반복
	(num[i] - num[i+1]) * (i + 1)의 합을 구하기
	*/

	vector<int> num;
	int iAnswer = 0;

	InputFunc(num);

#pragma region CODE
// 여기에 코드 작성
#pragma endregion

	cout << iAnswer << endl;

	Sol1(num);
}