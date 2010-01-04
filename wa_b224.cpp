/**********************************************************************************/
/*  Problem: b224 "C. 喵喵抓老鼠" from 2008 NPSC 國中組決賽             */
/*  Language: C++                                                                 */
/*  Result: RF on ZeroJudge                                                       */
/*  Author: chchwy at 2009-12-10 17:11:00                                         */
/**********************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

enum{MOUSE=10001, WALL, SPACE, BREAK};

class point{
	public:
		int x,y;
		point(int px,int py){x=px; y=py;}
};

int BFS(point start, int map[100][100]){

	int move[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
	map[start.x][start.y]=0;

	queue<point> q;
	q.push(start);

	while(!q.empty()){
		point p = q.front();
		q.pop();
		for(int i=0;i<4;++i){
			int x = p.x+move[i][0];
			int y = p.y+move[i][1];

			if(map[x][y]==MOUSE){
				return map[p.x][p.y]+1;

			}else if(map[x][y]==SPACE){
				map[x][y] = map[p.x][p.y]+1;
				q.push(point(x,y));
			}
		}
	}
	return 0;
}
int main(){
	freopen("test.in","r",stdin);
	int line;
	while(scanf("%d ",&line)==1){
		if(line==0) break;

		//read map
		int map[100][100];
		int cat_x,cat_y;
		for(int i=0;i<line;++i){
			for(int j=0;j<100;++j){

				char c = getchar();
				if(c=='\n') break;

				if(c=='#') map[i][j]=WALL;
				else if(c=='.') map[i][j]=SPACE;
				else if(c=='@') map[i][j]=MOUSE;
				else if(c=='K') { cat_x=i; cat_y=j; }
			}
		}
		//use BFS to find the nearest of mouse;
		int findMouse = BFS(point(cat_x,cat_y),map);

		//output
		if(findMouse)
			printf("%d\n", findMouse);
		else
			puts("= =\"");
	}
	return 0;
}

