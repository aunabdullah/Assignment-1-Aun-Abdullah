#include <iostream>
using namespace std;
struct node
{
	int data;
	node*next;
};
class list
{
	private:
		node*head, *tail;
	public:
		list();
		void createnode(int value);
		void display();
		void insert_start(int value);
		void insert_position(int pos, int value);
		void delete_first();
		void delete_last();
		void delete_position(int pos);
};
list::list()
{
	head = NULL;
	tail = NULL;
}
void list::createnode(int value)
{
	node*temp = new node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
	else
		{
			tail->next = temp;
			tail = temp;
		}
}
void list::display()
{
	node*temp= new node;
	temp = head;
	while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}
}
void list::insert_start(int value)
{
	node*temp = new node;
	temp->data = value;
	temp->next = head;
	head = temp;
}

void list::insert_position(int pos, int value)
{
	node*pre = new node;
	node*cur = new node;
	node*temp = new node;
	cur = head;
	for (int i = 1; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
	temp->data = value;
	pre->next = temp;
	temp->next = cur;
}

void list::delete_first()
{
	node*temp = new node;
	temp = head;
	head = head->next;
	delete temp;
}

void list::delete_last()
{

	node * temp;
	temp = head;
	while (temp->next != tail)
		{
			temp = temp->next;
		}
	tail = temp;
	delete temp->next;
	tail->next = NULL;
}

void list::delete_position(int pos)
{
	node * temp = new node;
	node * cur= new node;
	cur = head;
	for (int i = 1; i < pos; i++)
		{
			temp = cur;
			cur = cur->next;
		}
	temp->next = cur->next;
	delete cur;
}



