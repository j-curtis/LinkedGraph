//Header file for graph class 
//Jonathan Curtis 
//05/25/16

#include <iostream>

//First we create a class for the nodes 
template <class T>
class Node{
	//We use templates for the actual data type contained at each node 
	T value;	//The data contained in the node 

	Node():	value(){}	//Contstructor. Sets value of the data to the default value by null constructor

	Node * getAddress(){return this;}	//Returns a pointer to this node  
};

//Class for the edges (each connects to nodes) 
//These ARE directed and point from one to the other 
//To create an undirected edge, just use two directed edges in opposite directions 
template <class T>
class Edge{
	//Each edge leads from the start node to the end node 
	Node<T> * start_node;
	Node<T> * end_node;

	Edge(Node<T> * n1, Node<T> * n2): start_node(n1), end_node(n2){}	//Creates an edge from n1 to n2 
	Edge(Node<T> n1, Node<T> n2): start_node(n1.getAddress()), end_node(n2.getAddress()){}
};


