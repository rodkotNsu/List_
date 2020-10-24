#include <stdio.h>
typedef int ListElement;
struct NodeList {
	ListElement element;
	struct NodeList* next;

};
typedef struct NodeList NodeList;
struct List {
	NodeList* head;
	NodeList* last;
};
typedef struct List List;



void init(List** list) {
	List* newList = (List*)malloc(sizeof(List));
	newList->head = NULL;
	newList->last = NULL;
	*list = newList;



}
int add(List** list, ListElement x) {
	NodeList* newElement = (NodeList*)malloc(sizeof(NodeList));
	newElement->element = x;

	if ((*list)->head == NULL) {
		(*list)->head = newElement;
		(*list)->last = newElement;
		newElement->next = (*list)->head;
		return 0;
	}
	newElement->next = (*list)->head;
	//(*list)->head->next = newElement;
	(*list)->last->next = newElement;
	(*list)->last = newElement;

	return 1;




}
void printList(List* list) {
	NodeList* tmp = list->head;
	do
	{
		printf("%d\n", tmp->element);
		tmp = tmp->next;
	} while (tmp != list->head);
}
void clean(List* list) {

}
/*void printList(List** list) {
	List* tmp = *list;
	int* str = (int*)malloc(100 * sizeof(int));
	int i = 0;
	while (tmp != NULL) {
		str[i] = tmp->element;
		i++;
		tmp = tmp->next;

	}
	while (i > 0) {
		i--;
		printf("%d\n", str[i]);

	}
	free(str);



}
void clean(List** list) {
	List* tmp = *list;
	while (tmp != NULL) {
		List* next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*list = NULL;

}

ListElement get_last(List** list) {
	return (*list)->element;
}
ListElement pop_last(List** list) {
	ListElement value = (*list)->element;
	List* last = *list;
	*list = (*list)->next;
	free(last);
	return value;
}

unsigned int length_list
(List** list) {
	List* tmp = *list;
	unsigned int len = 0;
	while (tmp != NULL) {
		tmp = tmp->next;
		len++;
	}
	return len;
}
ListElement get(List** list, unsigned int  number) {
	unsigned int len = length_list(list);
	List* listt = *list;
	if (number > len - 1)
		return -1;
	int i = 0;

	while (len - number - 1 - i != 0)
	{
		listt = listt->next;
		i++;
	}
	return listt->element;

}
ListElement removeElement(List** list, unsigned int  number) {
	unsigned int len = length_list(list);
	List* listt = *list;
	if (number > len - 1)
		return -1;
	int i = 0;

	while (len - number - 1 - i != 0)
	{
		listt = listt->next;
		i++;
	}
	return listt->element;

}
*/
int main(void) {
	List* hell;
	init(&hell);
	add(&hell, 5);
	add(&hell, 9);
	add(&hell, 3);
	add(&hell, 2);
	add(&hell, 33);

	printList(hell);





	return 0;
}