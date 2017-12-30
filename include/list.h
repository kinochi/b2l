#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
struct nodel{
	int data;
	struct nodel *next;
};
typedef struct nodel nodel;

struct List{
	nodel* head;
	nodel* tail;
};
typedef struct List List;

nodel* createNodeL(int data);		// For creating nodes
List* createList(int data);			// For creating Linked List
void appendList(int data, List* List);	// For appending new values to the List
void deleteNode(int data);			// For deleting node with given data
void deleteList(List* List);		// For freeing the List
void printList(List* List);			// For printing List

#endif
