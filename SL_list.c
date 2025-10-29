#include "SL_list.h"


LinkedList init_list() {
		LinkedList list = {NULL,0};
		return list;
}

int add_element(LinkedList* list, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        return -1; 
    }
    
    (*new_node).data = data;
    (*new_node).next = NULL;
    
    if ((*list).head == NULL) {
        (*list).head = new_node;
    } else {
        Node* current = (*list).head;
        while ((*current).next != NULL) {
            current = (*current).next;
        }
        (*current).next = new_node;
    }
    
    (*list).size=(*list).size+1;
    return 0; 
}

int remove_element(LinkedList* list, int data) {
    if ((*list).head == NULL) {
        return -1; 
    }
    
    Node* current = (*list).head;
    Node* prev = NULL;
    
    
    if (current != NULL && (*current).data == data) {
        (*list).head = (*current).next;
        free(current);
        (*list).size=(*list).size-1;
        return 0;
    }
    
    
    while (current != NULL && (*current).data != data) {
        prev = current;
        current = (*current).next;
    }
    
    
    if (current == NULL) {
        return -1;
    }
		else {
				(*prev).next = (*current).next;
				free(current);
				(*list).size=(*list).size-1;
        return 0;
    }
}
int remove_head(LinkedList* list) {
    if ((*list).head == NULL) {
        return -1; 
    }
    
    Node* current = (*list).head;
    (*list).head = (*current).next;
    free(current);
    (*list).size=(*list).size-1;
    return 0;
}

int sort_list(LinkedList* list){
		if (list->head == NULL || list->head->next == NULL) {
        return 0;
    }
		int swapped;
    Node* current;
    Node* last_swapped = NULL;
    
    do {
        swapped = 0;
        current = (*list).head;
        
        while ((*current).next != last_swapped) {
            if ((*current).data > (*(*current).next).data) {
                int temp = (*current).data;
                (*current).data = (*(*current).next).data;
                (*(*current).next).data = temp;
                swapped = 1;
            }
            current = (*current).next;
        }
        last_swapped = current;
        
    } while (swapped);
		return 0;
}

