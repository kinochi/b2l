#include "../include/bst.h"

nodeb* createNodeB(int data){
	nodeb* temp = (nodeb*) malloc(sizeof(nodeb));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
Bst* createBst(int data){
	Bst* bst = (Bst*) malloc(sizeof(Bst));;
	bst->head = createNodeB(data);
	return bst;
}
void insertBst(int data, Bst* bst){
	nodeb *temp1,*temp = bst->head;
	temp1 = temp;
	int flag;
	while(1){
		if( data >= temp->data){
			temp = temp->right;	flag=0;
		}
		else{
			temp = temp->left;	flag=1;
		}
		if(!temp) break;
		temp1 = temp;
	}
	if(flag)  temp1->left = createNodeB(data); else  temp1->right = createNodeB(data);		
}	
void deleteBst(Bst* bst){
	deleteBstUtil(bst->head);
	free(bst);
}
void deleteBstUtil(nodeb* node){
	if(!node) return;
	deleteBstUtil(node->left);
	deleteBstUtil(node->right);
	free(node);
}
void printBst(Bst* bst){
	printBstUtil(bst->head);
	printf("\n");
}
void printBstUtil(nodeb* node){
	if(!node) return;
	printBstUtil(node->left);
	printf("%d ",node->data);
	printBstUtil(node->right);
}
