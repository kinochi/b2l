#include "include/bst.h"	
#include "include/list.h"
#include "include/bst_to_list.h"
int main(){
	List* list = createList(5);
	appendList(4,list);
	appendList(3,list);
	appendList(2,list);
	printList(list);
	deleteList(list);
	Bst* bst = createBst(5);
	insertBst(4,bst);
	insertBst(6,bst);
	insertBst(5,bst);
	insertBst(1,bst);
	printBst(bst);
	List* blist = bst_to_list(bst);
	printList(blist);
	deleteBst(bst);
	deleteList(blist);
	return 0;
}
