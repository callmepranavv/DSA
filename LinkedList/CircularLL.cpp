#include<bits/stdc++.h>
using namespace std;

// Node Creation
struct Node
{
	int data;
	Node *next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};


// Insert at begin in Circular LL
Node * InsertBegin(Node *head , int x)
{
	Node *temp = new Node(x);

	if(head == NULL)
	{
		temp->next = temp;		//Corner case if LL is NULL/Empty
		return temp;
	}

	else
	{
		temp->next = head->next;	//Insert temp after head
		head->next = temp;

		int t = head->data;
		head->data = temp->data;	//Swap data of temp and head
		temp->data = t;

		return head;			//return head as head
	}
}


//Insert at end in an Circular LL
Node *InsertEnd(Node *head , int x)
{
	Node *temp = new Node(x);

	if(head == NULL)
	{
		temp->next = temp;								//Corner case if LL is NULL/Empty
		return temp;
	}

	else
	{
		temp -> next = head ->next;				//Insert temp after head
		head->next = temp;

		int t = temp->data;								//Swap data of temp and head
		temp->data = head->data;
		head->data = t;

		return temp;											//return temp as the new head

	}
}


//Delete head in an Circular LL
Node *DeleteHead(Node* head)
{
	if(head == NULL)	return NULL;			//Corner case if LL is NULL/Empty

	if(head->next ==head)
	{
		delete head;
		return NULL;											//Corner Case if only 1 ele in LL
	}

	head->data = head->next->data;			// Copy head.next data into head

	Node *temp = head->next;
	head->next = head->next->next;			// make head.next as head.next.next

	delete temp;												//Delete the temp ie curr.next
	return head;												// return head
}


//Delete kth node in an Circular LL
Node *DeleteKth(Node *head , int k)
{
	if(head == NULL)	return NULL;			//Corner case if LL is NULL/Empty

	if(k == 1)						
	{
		return DeleteHead(head);					//Case where k=1 ie delete 1st element ==> same as deleting the head
  }

  Node *curr  = head;
  for(int i = 0 ; i < k-2 ; i++)     	//Loop to reach the k-1th element for the kth element to be deleted
  		curr = curr->next;

  Node *temp = curr->next;						
  curr->next = curr->next->next;			//make next.next element as next 

  delete temp;												//Delete the temp ie curr.next
  return head;
}

// Traversing of a Circular LL
void print(Node *head)
{
	if(head == NULL) return;
		cout<<head->data<<" ";

	for(Node *p = head->next ; p != head ; p = p->next)     //to check untill next ele is head
		cout<<p->data<<" ";
}


int main()
{

  Node *head = NULL;

  head = InsertBegin(head,10);
  head = InsertBegin(head,20);
  head = InsertBegin(head,30);
  print(head);
  cout<<endl;
  
  head = InsertEnd(head,40);
  head = InsertEnd(head,50);
  head = InsertEnd(head,60);
  print(head);
  cout<<endl;


  head = DeleteHead(head);
  print(head);
  cout<<endl;
  
  head = DeleteKth(head,3);
  head = DeleteKth(head,1);
  print(head);
  cout<<endl;

  return 0;

}
