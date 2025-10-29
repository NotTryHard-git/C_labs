#ifndef SL_LIST_H
#define SL_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node; 

typedef struct Node {
    int data;           
    struct Node* next;  
} Node;


typedef struct {
    Node* head;         
    int size;          
} LinkedList;


LinkedList init_list();
int add_element(LinkedList* list, int data);
int remove_element(LinkedList* list, int data);
int remove_head(LinkedList* list);
int sort_list(LinkedList* list);

#endif
