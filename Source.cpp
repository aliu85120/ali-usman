#include<iostream>
#include "link.h"
using namespace std;

int main()
{
	link ob;
	cout << "first 5 nodes are :\n";
	ob.create_node(25);
	ob.create_node(50);
	ob.create_node(90);
	ob.create_node(40);
	ob.create_node(55);
	
	ob.display();
	
	cout << endl;
	cout <<  "in the beginning we create a new node :\n";
	ob.add_first(15);
	cout << endl;	
	ob.display();
	cout << endl;	cout << endl;
	
	cout  << "in the end a new node is created :\n";
	ob.insert_last(10);
	ob.display();
	cout << endl;	cout << endl;
	
	cout  << "Now the first node is deleted :\n";
	ob.delete_start();
	ob.display();
	cout << endl;	cout << endl;
	
	cout << "now the last node is deleted  :\n";
	ob.delete_last();
	ob.display();
	cout << endl;	cout << endl;
	
	cout <<"the  node at 4 was deleted  and it is created at 3rd position :\n";
	ob.delete_add(4,40);
	ob.display();
	cout << endl;	cout << endl;
	
	system("pause");
	return 0;
}