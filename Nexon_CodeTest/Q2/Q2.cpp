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
	vector<int> num;
	int iAnswer = 0;

	InputFunc(num);

#pragma region CODE
// 여기에 코드 작성
#pragma endregion

	cout << iAnswer << endl;

	Sol1(num);
}
