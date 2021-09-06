#include "stdafx.h"
#include "Caesar_Cipher.h"

void Solution_CaesarCipher()
{
	string input;
	string res = "";

	int caesar_num;

	// Input String
	getline(cin, input);
	cin >> caesar_num;

	char tmp = '\0';

	for (char ch : input)
	{
		// 1. ch가 공백일 경우
		if (ch == ' ')
		{
			// 그냥 결과 문자열에 공백 추가 후 continue
			res += ch;
			continue;
		}
		// 2. ch가 대문자일 경우
		else if (ch >= 'A' && ch <= 'Z')
			// 임시 문자 'A'로 설정
			tmp = 'A';
		// 3. ch가 소문자일 경우
		else if (ch >= 'a' && ch <= 'z')
			// 임시 문자 'a'로 설정
			tmp = 'a';

		// ch - tmp => ch가 몇 번째 알파벳인지 구함
		// ex) ch가 'F'일 경우 ch - tmp = 5
		// ch - tmp에 시저 암호 넘버만큼 더해주면 그만큼 밀림
		// 더했을 경우 'Z'나 'z'를 넘을 가능성이 있기 때문에 %26으로 범위를 0~25로 제한
		// 최종적으로 나온 값을 tmp에 더해주면 알파벳이 밀림
		res += tmp + ((ch - tmp + caesar_num) % 26);
	}

	// 결과물 출력
	cout << res;
}