#include<iostream>
using namespace std;

enum{MAX_LENGTH=1000};


int LCS(string &str1, string str2){
    int path[MAX_LENGTH+1][MAX_LENGTH+1];

    for(int i=0;i<str1.size();++i)
        path[i][0] = 0;
    for(int i=0;i<str2.size();++i)
        path[0][i] = 0;
	
	//LCS
    for(int i=1;i<=str1.size();++i){
        for(int j=1;j<=str2.size();++j){

            if( str1[i-1] == str2[j-1] ){
                path[i][j] = path[i-1][j-1]+1;
            }else{
                path[i][j] = max(path[i][j-1], path[i-1][j]);
            }
        }
    }
    return path[str1.size()][str2.size()];
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("10405.in","r",stdin);
    #endif

    string str1, str2;
    while( getline(cin,str1) && getline(cin,str2) ){
        printf("%d\n", LCS(str1, str2) );
    }
    return 0;
}
