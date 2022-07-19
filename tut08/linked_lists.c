// COMP1511 Tut08 - Linked Lists
// Ada Luong, July 2022

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *create_node(int value);
void print_linked_list(struct node *head);
void print_last_node(struct node *head);

int main(void) {

    // creating a linked list manually
    struct node *one = create_node(1);
    struct node *two = create_node(2);
    struct node *three = create_node(3);
    struct node *four = create_node(4);

    // one -> two -> three -> four -> X
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    
    struct node *head = one;
    print_linked_list(head);
    print_last_node(head);
  
}

// Print all the elements of a linked list
void print_linked_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        
        // print out a node that current is pointing at
        printf("%d ", current->value);
        
        current = current->next;
       
    }
    printf("\n");  

}

// Print the last node of a linked list given 
// its first node
void print_last_node(struct node *head) {
    struct node *current = head;
    
    // dealing with the case where there are no elements in the linked list
    if (head == NULL) {
        return;
    }
    
    while (current-> next != NULL) {
        current = current->next;
    }
    
    // at this point, current-> next == NULL
    printf("%d", current->value);
}

// Takes in an integer and returns a pointer
// to a new node in a linked list containing that value
struct node *create_node(int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}
