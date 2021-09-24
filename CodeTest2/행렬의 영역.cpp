#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> Mat;
vector<vector<bool>> CheckedMat;

int ArrSize=0;
int Cnt=1;
vector<int> res_vec;

struct Point
{
	int x;
	int y;
};

Point Dir[4]={{-1,0},{1,0},{0,-1},{0,1}};

void dfs(int _x,int _y)
{
	 CheckedMat[_x][_y]=true;
	
		for(int i=0;i<4;++i)
		{
			int nx = _x + Dir[i].x;
			int ny = _y + Dir[i].y;
			
			if(nx<0||ny<0 || nx>=ArrSize || ny>= ArrSize)
					continue;
			
			if(CheckedMat[nx][ny])
					continue;
			
			if(Mat[nx][ny]==0)
			{
				CheckedMat[nx][ny]= true;
				continue;
			}
			
			dfs(nx,ny);
				++Cnt;
		}
	
}

int main() {
	
	cin>>ArrSize;
	
	Mat.resize(ArrSize);
	CheckedMat.assign(ArrSize,vector<bool>(ArrSize,false));
	
	for(int j=0;j<ArrSize;++j)
	{
		for(int i=0;i<ArrSize;++i)
		{
			int input;
			cin>>input;
			Mat[j].push_back(input);
		}
	}
	
	for(int i=0;i<ArrSize;++i)
	{
		for(int j=0;j<ArrSize;++j)
		{
			 if(!CheckedMat[i][j] && Mat[i][j])
			 {
				 dfs(i,j);
				 res_vec.push_back(Cnt);
				 Cnt=1;
			 }
		}
	}
	
	
	cout<<res_vec.size()<<endl;
	
	sort(res_vec.begin(),res_vec.end());
	
	for(int area: res_vec)
		cout<< area<<" ";
	
	
	return 0;
}