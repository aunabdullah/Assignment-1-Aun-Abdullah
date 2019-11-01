#include<iostream>
#include"LinkedList.h"
using namespace std;
int main()
{
	list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	obj.createnode(55);
	cout << "\n.....................\n";
	cout << "\n......Displaying All nodes...............\n";
	cout << "\n.....................\n";
	obj.display();
	cout << "\n.....................\n";
	cout << "\n.....Inserting At End................\n";
	cout << "\n.....................\n";
	obj.createnode(15);
	obj.display();
	cout << "\n.....................\n";
	cout << "\n......Inserting At Start...............\n";
	cout << "\n.....................\n";
	obj.insert_start(10);
	obj.display();
	cout << "\n.....................\n";
	cout << "\n.......Inserting At Particular..............\n";
	cout << "\n.....................\n";
	obj.insert_position(5, 60);
	obj.display();
	cout << "\n.....................\n";
	cout << "\n.......Deleting At Start..............\n";
	cout << "\n.....................\n";
	obj.delete_first();
	obj.display();
	cout << "\n.....................\n";
	cout << "\n.......Deleting At End..............\n";
	cout << "\n.....................\n";
	obj.delete_last();
	obj.display();
	cout << "\n.....................\n";
	cout << "\n.......Deleting At Particular..............\n";
	cout << "\n.....................\n";
	obj.delete_position(4);
	obj.display();
	cout << "\n.....................\n";
	cout << "\n......Adding At Location 3...............\n";
	cout << "\n.....................\n";
	obj.insert_position(3,60);
	obj.display();
	cout << "\n.....................\n";

	system("pause");
	return 0;
}

