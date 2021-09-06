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
		// 1. ch�� ������ ���
		if (ch == ' ')
		{
			// �׳� ��� ���ڿ��� ���� �߰� �� continue
			res += ch;
			continue;
		}
		// 2. ch�� �빮���� ���
		else if (ch >= 'A' && ch <= 'Z')
			// �ӽ� ���� 'A'�� ����
			tmp = 'A';
		// 3. ch�� �ҹ����� ���
		else if (ch >= 'a' && ch <= 'z')
			// �ӽ� ���� 'a'�� ����
			tmp = 'a';

		// ch - tmp => ch�� �� ��° ���ĺ����� ����
		// ex) ch�� 'F'�� ��� ch - tmp = 5
		// ch - tmp�� ���� ��ȣ �ѹ���ŭ �����ָ� �׸�ŭ �и�
		// ������ ��� 'Z'�� 'z'�� ���� ���ɼ��� �ֱ� ������ %26���� ������ 0~25�� ����
		// ���������� ���� ���� tmp�� �����ָ� ���ĺ��� �и�
		res += tmp + ((ch - tmp + caesar_num) % 26);
	}

	// ����� ���
	cout << res;
}