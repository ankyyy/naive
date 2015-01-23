#include <iostream>
using namespace std;

struct trip
{
int x,l,f;

}obj[1001];

int main()
{

int t;
cin>>t; 

while(t)
{
int diff=0,cur_time=0;
int n,i,j;
cin>>n;
for( i=0;i<n;i++)
{
	cin>>obj[i].x>>obj[i].l>>obj[i].f;
}

cur_time+=obj[0].x;
cur_time+=obj[0].l;
//cout<<cur_time<<endl;
for(i=1;i<n;i++)
{
if(cur_time==obj[i].x)
	cur_time+=obj[i].l;
else
{
		if(cur_time<obj[i].x)
{
	 diff=obj[i].x-cur_time;	
	cur_time+=diff;
	cur_time+=obj[i].l;

}

else{
while(1)
{


	obj[i].x+=obj[i].f;
	if(obj[i].x>=cur_time)
		break;
}	//while loop
	
	 diff=obj[i].x-cur_time;	
	cur_time+=diff;
	cur_time+=obj[i].l;

}	//else

}	// else
}	//for loop	

cout<<cur_time<<endl;

t--;
}


return 0;
}
