#include<stdio.h>
#include <stdlib.h>

void insert_at_beg();
void insert_at_end();
void insert_at_given_pos();
void delete_from_beg();
void delete_from_end();
void delete_from_given_pos();
void search();
void display();

int element, pos, n;

struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;

int main() {
    int choice;

    do {
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at given position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from given position\n");
        printf("7. Search\n");
        printf("8. Display\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &element);
                insert_at_beg();
                break;
            case 2:
                printf("Enter the element you want to insert: ");
                scanf("%d", &element);
                insert_at_end();
                break;
            case 3:
                printf("Enter the position: ");
                scanf("%d", &pos);
                printf("Enter the element you want to insert: ");
                scanf("%d", &element);
                insert_at_given_pos();
                break;
            case 4:
                delete_from_beg();
                break;
            case 5:
                delete_from_end();
                break;
            case 6:
                printf("Enter the position: ");
                scanf("%d", &n);
                delete_from_given_pos();
                break;
            case 7:
                printf("Enter the element you want to search: ");
                scanf("%d", &element);
                search();
                break;
            case 8:
                display();
                break;
            default:
                printf("Exiting the program...\n");
        }
    } while(choice < 9);

    return 0;
}

void insert_at_beg() {
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    if(temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    temp->data = element;
    temp->next = head;
    head = temp;
}

void insert_at_end() {
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    if(temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    temp->data = element;
    temp->next = NULL;

    if(head == NULL) {
        head = temp;
    } else {
        struct node *temp1 = head;
        while(temp1->next != NULL) {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void insert_at_given_pos() {
    if(pos == 1) {
        insert_at_beg();
    } else {
        struct node *temp = (struct node*) malloc(sizeof(struct node));
        if(temp == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        temp->data = element;

        struct node *temp1 = head;
        for(int i = 1; i < pos - 1; i++) {
            if(temp1 == NULL) {
                printf("Position out of bounds\n");
                return;
            }
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;
    }
}

void delete_from_beg() {
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        struct node* temp = head;
        head = head->next;
        free(temp);
    }
}

void delete_from_end() {
    if(head == NULL) {
        printf("List is empty\n");
    } else if(head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        struct node* temp = head;
        struct node* temp1;
        while(temp->next != NULL) {
            temp1 = temp;
            temp = temp->next;
        }
        temp1->next = NULL;
        free(temp);
    }
}

void delete_from_given_pos() {
    if(head == NULL) {
        printf("List is empty\n");
    } else if(n == 1) {
        struct node* temp = head;
        head = head->next;
        free(temp);
    } else {
        struct node* temp = head;
        struct node* temp1;
        for(int i = 1; i < n - 1; i++) {
            if(temp->next == NULL) {
                printf("Position out of bounds\n");
                return;
            }
            temp = temp->next;
        }
        temp1 = temp->next;
        if(temp1 == NULL) {
            printf("Position out of bounds\n");
            return;
        }
        temp->next = temp1->next;
        free(temp1);
    }
}

void search() {
    int found = 0;
    struct node* temp = head;
    while(temp != NULL) {
        if(temp->data == element) {
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if(found) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }
}

void display() {
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        struct node* temp = head;
        while(temp != NULL) {
            printf("%d\t%p\t%p\n", temp->data, temp, temp->next);
            temp = temp->next;
        }
        printf("\n");
    }
}
