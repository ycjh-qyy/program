#include<bits/stdc++.h>
using namespace std;
int x1,x2,yy1,y2;
class Subject{
    public:
    vector<int>left;
    vector<int>right;
    vector<int>top;
    vector<int>bot;
    int n;
    Subject(){n=0;}
    void add(){
	left.push_back(x1);
	right.push_back(x2);
	top.push_back(yy1);
	bot.push_back(y2);
	n++;
    }
}T[10];
char ss[10][10],s[1000];
int main(){
    strcpy(ss[0],"bus");
    strcpy(ss[1],"car");
    strcpy(ss[2],"traffic");//traffic light
    strcpy(ss[3],"person");
    strcpy(ss[4],"motorbike");
    strcpy(ss[5],"truck");
    strcpy(ss[6],"bicycle");
    while(scanf("%s",s)!=EOF){
	scanf("%s",s);
	scanf("%d%d%d%d",&x1,&x2,&yy1,&y2);
	for(int i=0;i<7;i++)
	    if(strcmp(ss[i],s)==0)
		T[i].add();
    }
    if(T[0].n+T[1].n+T[5].n>T[3].n+T[4].n+T[6].n)
	printf("Suggestion:Red\n");
    else printf("Suggestion:Green\n");
}

