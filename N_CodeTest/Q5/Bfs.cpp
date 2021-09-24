#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//나이트 문제
#include <vector>
#include <queue>

struct POINT
{
	int x;
	int y;

public:
	POINT operator+ (POINT& _p)
	{
		return POINT{ x + _p.x, y + _p.y };
	}

	bool operator== (POINT& _p)
	{
		if (x == _p.x && y == _p.y)
			return true;
		else
			return false;
	}
};

POINT DIR[8] = { {1,2},{-1,2},{1,-2},{-1,-2},
				 {2,1},{-2,1},{2,-1},{-2,-1}, };


void FindNight()
{
	int iArrSize = 0;
	scanf_s("%d", &iArrSize);

	vector<vector<int>> Board(iArrSize, vector<int>(iArrSize, 0));

	queue<POINT> q;
	POINT Pos[2]; // Start ,End
	for (int i = 0; i < 2; ++i)
	{
		scanf_s("%d", &Pos[i].x);
		scanf_s("%d", &Pos[i].y);
	}

	q.push(Pos[0]);

	while (!q.empty())
	{
		POINT Orgin = q.front();
		q.pop();

		if (Orgin == Pos[1])
		{
			printf_s("%d", Board[Orgin.x][Orgin.y]);

			break;
		}


		for (int i = 0; i < 8; ++i)
		{
			POINT newPos = Orgin + DIR[i];

			if ((newPos.x >= 0) && (newPos.y >= 0) && (newPos.x < iArrSize) && (newPos.y < iArrSize))
			{
				if (0 == Board[newPos.x][newPos.y])
				{
					Board[newPos.x][newPos.y] = Board[Orgin.x][Orgin.y] + 1;

					q.push(POINT{ newPos.x, newPos.y });
				}
			}
		}
	}
}
int main()
{
	for (int i = 0; i < 3; ++i)
	{
		FindNight();
	}

	return 0;
}