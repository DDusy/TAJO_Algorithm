#include <vector>
#include "stdafx.h"
#include "Q1.h"

void Solution_Q1()
{
	int target;
	int arr_len, query_len;
	vector<int> arr, query;

	cin >> target;

	cin >> arr_len;
	int num;
	for (int i = 0; i < arr_len; ++i)
	{
		cin >> num;
		arr.push_back(num);
	}

	cin >> query_len;
	for (int i = 0; i < query_len; ++i)
	{
		cin >> num;
		query.push_back(num);
	}

#pragma region CODE
	// 여기에 코드 입력하세요
#pragma endregion
}