#include<iostream>
#include<queue>
using std::queue;

enum{MAPSIZE=100};
class point{
public:
	int x,y;
	point(int px,int py){x=px; y=py;}
};

point findCat( char map[MAPSIZE][MAPSIZE+2] ){

	for(int i=0;i<MAPSIZE;++i)
		for(int j=0;j<MAPSIZE;++j)
			if(map[i][j] == 'K')
				return point(i,j);
}

int BFS( char map[MAPSIZE][MAPSIZE+2] ){

	int move[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

	int step[MAPSIZE][MAPSIZE]; // record the steps from cat to mouse
	memset(step, 0, sizeof(step));

	/* breadth first search */
	
	point cat = findCat(map);
	step[cat.x][cat.y]=0;

	queue<point> q;
	q.push(cat);

	while(!q.empty()){
		
		point cur = q.front(); q.pop();

		if(map[cur.x][cur.y]=='@')
			return step[cur.x][cur.y];

		map[cur.x][cur.y] = '#';

		/* add neighbor to queue */
		for(int i=0;i<4;++i) {
			int next_x = cur.x + move[i][0];
			int next_y = cur.y + move[i][1];

			if( map[next_x][next_y]!='#' ) {
				step[next_x][next_y] = step[cur.x][cur.y] + 1;
				q.push( point(next_x,next_y) );
			}
		}
	}
	return 0; //not found
}

int main(){

	int lineNum;
	while(scanf("%d ",&lineNum)==1){

		if(lineNum==0) break;

		/* read map */
		char map[MAPSIZE][MAPSIZE+2]; // include \n,\0
		for(int i=0;i<lineNum;++i)
			fgets(map[i], sizeof(map[i]), stdin);
		
		//use BFS to find mouse;
		int mouse = BFS(map);

		//output
		if(mouse>0)
			printf("%d\n", mouse);
		else
			puts("= =\"");
	}
	return 0;
}

