#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node*lchild;
	node*rchild;
	node(){};
};
node*root=NULL;
node*root2=NULL;


node* createnode(char n)
{
	node*temp=new node();
	temp->lchild=NULL;
	temp->rchild=NULL;
	temp->data=n;
	return temp;
}
int arr[20],i=0;
int display(node* R,char arr[],int &i)
{
	if(R==NULL)
		return 0;

		display(R->lchild,arr,i);
		arr[++i]=R->data;
		//cout<<R->data<<" ";
		display(R->rchild,arr,i);

	
	
}
node* search(node*r,node* t)
{
	if(r==0)
		return 0;
	if(r->data==t->data)
		return r;
	node* temp=search(r->lchild,t);
	if(temp!=NULL)
		return temp;
	temp=search(r->rchild,t);
	return temp;
}

int isequal(node*r1,node*r2)
{
	if(r1==0||r2==0)
		return 0;
	if(r1->lchild!=r2->lchild||r1->rchild!=r2->rchild)
		return 3;
	else
		return 4;
	int t=isequal(r1->lchild,r2->lchild);
	if(t!=0)
		return t;
	isequal(r1->rchild,r2->rchild);
	//return t;
}
int calculate_level(node*R,int data,int level)
{
	if(R==NULL)
		return 0;
	if(R->data==data)
		return level;


	cout<<level<<" ";

		int downlevel=calculate_level(R->lchild,data,level+1);
		if(downlevel!=0)
		return downlevel;
		downlevel=calculate_level(R->rchild,data,level+1);
		//return downlevel;
}

node* father(node*R,node* n)
{	
	if(R==NULL)
		return 0;
	if(R->lchild==n||R->rchild==n)
		return R;
	node* temp=father(R->lchild,n);
	if(temp!=NULL)
		return temp;
	father(R->rchild,n);
	//	return temp;
}
int main()
{
	node*temp;
		
		root=createnode('z');
		temp=root;
		temp->lchild=createnode('x');
		temp->rchild=createnode('e');
		temp=temp->lchild;
		temp->lchild=createnode('a');
		temp->rchild=createnode('b');
		temp->lchild->rchild=createnode('c');
		root->rchild->rchild=createnode('k');
		
		root2=createnode('x');
		root2->lchild=createnode('a');
		root2->rchild=createnode('b');
		root2->lchild->rchild=createnode('c');
		cout<<endl;
		char arr1[30],arr2[30];
		 int s=0,r=0;
		display(temp,arr1,s);
		cout<<endl;
			int flag=0;
		display(root2,arr2,r);
		cout<<s<<endl;
		for (int i = 1; i<=s; ++i)
		{
			cout<<arr1[i]<<endl;
		}
		for (int i = 1; i<=s; ++i)
			{
				if(arr1[i]!=arr2[i])
					{flag=1;
					break;}
			}	
			if(flag==0)
				cout<<"yessssss";
			else
				cout<<"nooooo";
	return 0;
}