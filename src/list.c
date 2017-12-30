#include "../include/list.h"

nodel* createNodeL(int data){
	nodel* temp = (nodel*) malloc(sizeof(nodel));
	temp->data = data;
	temp->next = NULL;
	return temp;
}

List* createList(int data){
	List* list = (List*) malloc(sizeof(List));
	nodel* temp = createNodeL(data);
	list->head = list->tail = temp;
	return list;
}

void appendList(int data, List* list){
	nodel* temp = createNodeL(data);	
	list->tail->next = temp;
	list->tail = temp;
}

void deleteList(List* list){
	nodel *temp1,*temp2;
	if(!list) return;
	for(temp1=list->head,temp2=temp1->next; temp2; temp2=temp2->next){
		free(temp1);
		temp1 = temp2;	
	}
	free(temp1);	
	free(list);
}

void printList(List* list){
	nodel* temp;
	for(temp=list->head; temp; temp=temp->next){
		printf("%d -> ",temp->data);
	}
	printf("NULL\n");
}
