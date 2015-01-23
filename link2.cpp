#include <iostream>
using namespace std;
class node
{
	public :
	
	int data;
	node*next;
	node()
	{}
};
node* head=NULL;
node *te=NULL;
#define pos(k) te=head; for (int i = 1; i < k-1; ++i){te=te->next;}

/*node** pos(int k)
{
	te=head;
	for (int i = 1; i < k-1; ++i)
	{
		te=te->next;
	}
	return &te;
}

void del(node* temp)
{
	node*temp1=temp->next;
	temp->next=temp1->next;
	delete temp1;
}
void insert(node*temp,int k)
{
	node*temp1=*pos(k);
	temp->next=temp1->next;
	temp1->next=temp;
}*/
int main()
{
	node*temp,*temp1;
	for (int i = 1; i <=9; ++i)
	{
		if(i==1)
		{	node* temp=new node();
			temp->data=i;
			temp->next=NULL;
			head=temp;
			temp1=temp;
		}
		else
		{
			node*t=new node();
			t->data=i;
			t->next=NULL;
			temp1->next=t;
			temp1=temp1->next;

		}

	}
	int size=0;
	temp1=head;
	while(temp1!=NULL)
	{
		size++;
		temp1=temp1->next;
	}
	
	int k;
	cin>>k;
	node*temp2,*temp3;
	pos(k+1)
	temp1=te;
	pos(size-k+2)
	temp2=te;
	//del(*pos(k));
	
	pos(k)
	temp=te;
	temp3=temp->next;
	temp->next=temp3->next;
	//delete temp3;

	//del(*pos(size-k));
	pos(size-k)
	temp=te;
	temp3=temp->next;
	temp->next=temp3->next;
	//delete temp3;
	
//	insert(temp1,size-k);
	pos(size-k)
	temp3=te;
	temp1->next=temp3->next;
	temp3->next=temp1;

	//insert(temp2,k);
	pos(k)
	temp3=te;
	temp2->next=temp3->next;
	temp3->next=temp2;


	temp1=head;
	while(temp1!=NULL)
	{
		cout<<temp1->data<<" ";
		temp1=temp1->next;
	}
	return 0;
}


