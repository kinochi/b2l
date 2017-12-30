#include "../include/bst_to_list.h"

List* bst_to_list(Bst* bst){
	List* list = createList(-1);
	bst_to_list_util(bst->head, list);
	return list;
}

void bst_to_list_util(nodeb* node,List* list){
	if(!node) return;
	bst_to_list_util(node->left, list);
	appendList(node->data, list);
	bst_to_list_util(node->right, list);
}
