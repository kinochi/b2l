#include "bst.h"
#include "list.h"

List* bst_to_list(Bst* bst);					// Creates a Linked list from given bst
void bst_to_list_util(nodeb* node, List* list);	// Utility function for bst_to_linked
