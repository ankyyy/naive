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
node*create_node()
{
	node*t=new node();
	t->next=NULL;

	return t;

}
node* head=NULL;
int main()
{
	node*temp,*temp1;
	for (int i = 1; i <=10; ++i)
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
	/*node*temp3=new node();
				
	for(temp=head;temp!=NULL;temp=temp->next)
		for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
			if ((temp1->data)<(temp->data))
			{	
				temp3->data=temp1->data;
				temp1->data=temp->data;
				temp->data=temp3->data;
			}
	*/
	temp1=head;
	temp=head;
	//cout<<temp1;
	int n,m;
	cin>>m>>n;
	for (int i = 1; i < m; ++i)
	{
		temp1=temp1->next;
	}
	while(1)
	{
	
	for (int i = 0; i < n; ++i)
	{
		if(temp1->next->next==NULL)
			{
				temp=temp1->next;
				temp1->next=NULL;
				delete temp;
				break;
			}
		node*temp4=temp1->next;
		temp1->next=temp4->next;
		delete temp4;
	}
	if(temp->next!=NULL){
	for (int i = 1; i<=m; ++i)
	{
		temp1=temp1->next;
	}
	}
		if(temp1->next==NULL)
			break;
	}

	temp1=head;
	while(temp1!=NULL)
	{
		cout<<temp1->data<<endl;
		temp1=temp1->next;
	}
	return 0;//*/
}


