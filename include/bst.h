#ifndef NODE_B
#define NODE_B
#include <stdio.h>
#include <stdlib.h>
struct nodeb{
	int data;
	struct nodeb *right;
	struct nodeb *left;
};
typedef struct nodeb nodeb;

struct Bst{
	nodeb* head;
};
typedef struct Bst Bst;

nodeb* createNodeB(int data);		// For creating nodes
Bst* createBst(int data);			// For creating Linked List
void insertBst(int data, Bst* bst);	// For appending new values to the List
void deleteBst(Bst* bst);			// For freeing the List
void deleteBstUtil(nodeb* node);	// Util for freeing the List
void printBst(Bst* bst);			// For printing List
void printBstUtil(nodeb* node);		// Util for printing the List
#endif
