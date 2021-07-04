#include<bits/stdc++.h>
using namespace std;

struct Node  //Node Creation
{
	int data;
	Node *next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};


Node *InsertBegin(Node *head , int x) //Insert at Begin
{
	Node *temp = new Node(x);
	temp -> next = head;
	return temp;
}


Node *InsertLast(Node *head , int x)		//Insert at Last
{

	Node *temp = new Node(x);
	if(head==NULL) return temp;

	Node *curr = head;
	while(curr -> next != NULL)
		curr = curr -> next;

	curr -> next = temp;
	return head;

}


Node *InsertPos(Node *head, int pos, int x)  //Insert at given Position
{
	Node *temp = new Node(x);
	if(pos == 1)
	{
		temp -> next = head;
		return temp;
	}

	Node *curr = head;
	for(int i=1 ; i<=pos-2 && curr!=NULL ; i++)
		curr = curr -> next;

	if(curr == NULL) return head;

	temp->next = curr -> next;
	curr -> next = temp;

	
	return head;
}


Node *DelHead(Node *head)						//Delete first element
{
	if(head == NULL) return NULL;

	else
	{
		Node *temp = head->next;
		delete head;
		return temp;
	}
}

Node *DelLast(Node *head)					//Delete last element
{
	if(head == NULL) return NULL;

	if(head->next == NULL)
	{
		delete head;
		return NULL;
	}
	
	Node *curr = head;

	while(curr->next->next != NULL)
		curr = curr->next;

	delete(curr->next);
	curr->next = NULL;
	return head;
}


/*int SearchRec(Node *head, int x)    //Search element using Recursion
{
	if(head == NULL) return -1;

	if(head->data == x) return 1;

	else
	{
		int res = SearchRec(head->next,x);
		if(res ==-1)	return -1;
		else return(res+1);
	}
}*/

int Search(Node *head, int x)						//Search element
{
	int pos = 1;
	Node *curr = head;

	while(curr!=NULL)
	{
		if(curr->data == x) return pos;

		else
		{
			pos++;
			curr = curr->next;
		}
	}
	return -1;
}




void print(Node *head)							//Linked List traversal
{
	while(head != NULL)
	{
		cout << head -> data <<" ";
		head = head -> next;
	}
}


int main()
{
  Node *head = NULL;

  head = InsertBegin(head,10);
  head = InsertBegin(head,20);
  head = InsertBegin(head,30);
  head = InsertBegin(head,40);
  print(head);
  cout<<endl;
  
  head = InsertLast(head,50);
  head = InsertLast(head,60);
  print(head);
  cout<<endl;

  head = InsertPos(head,1,70);
  head = InsertPos(head,2,80);
  print(head);
  cout<<endl;

  head = DelHead(head);
  print(head);
  cout<<endl;
  
  head = DelLast(head);
  print(head);
  cout<<endl;


	cout<<"Position of element in Linked List: "<<Search(head,20)<<endl;;
  return 0;
}