#include <iostream>
#include <string>
using namespace std;

class node
{
public:
	 int data;
	 node* next;
	 node()
	 {}
	~ node();
	
};



node* myfunc(node* h1,node *h2)
{
	if(h1==NULL)
	return 0;

		if(h1->data!=h2->data)
		{
			if(h1->next==NULL)
				{h1=NULL;}
			else
			{
			h1->data=h1->next->data;
			h1->next=h1->next->next;
			}
		}
		if(h1!=NULL)
		{
			h1=h1->next;
			h2=h2->next;
		}


	 myfunc(h1,h2);
	return h1;
}
int main()
{
		node *head1,*head2;
		
		head1=new node();
		head1->next=new node();
		head1->next->next=new node();
		head1->next->next->next=new node();
		
		head1->data=3;
		head1->next->data=1;
		head1->next->next->data=9;
		head1->next->next->next->data=10;
				head1->next->next->next->next=NULL;

		head2=new node();
		head2->next=new node();
		head2->next->next=new node();
		head2->next->next->next=new node();
		
		head2->data=1;
		head2->next->data=6;
		head2->next->next->data=9;
		head2->next->next->next->data=11;
						head2->next->next->next->next=NULL;
		node*temp;
		temp=myfunc(head1,head2);

		while(temp!=NULL)
		{
			cout<<temp->data<<endl;;
			temp=temp->next;
		}
		return 0;

}