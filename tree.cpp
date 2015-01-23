#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node*lchild;
	node*rchild;
	node();
};
node*root=NULL;

node* createnode(int n)
{
	node*temp=new node();
	temp->lchild=NULL;
	temp->rchild=NULL;
	temp->data=n;
	return temp;
}
void display(node* R)
{
	if(R!=NULL)
	{
		display(R->lchild);
		cout<<R->data<<" ";
		display(R->rchild);

	}

}
int main()
{
	node*temp;
		
	if(root==NULL)
		{
			root=createnode(3);
			temp=root;
		}
	else
	{

		temp->lchild=createnode(2);

		temp->rchild=createnode(5);
		temp=temp->lchild;
		temp->lchild=createnode(1);
		temp->rchild=createnode(4);
		

	}

	return 0;
}