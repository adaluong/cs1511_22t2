#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};


struct node *create_node(int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;
    
    return new_node;
}

struct node *insert_at_head(int value, struct node *head) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = head;
    
    head = new_node;
    
    // In some cases you might prefer to return head
    return new_node;
    
}
