#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
typedef struct node node;
void print(node* head);
void insertl(node* head,int val);
void deletel(node* head);
int main() {
    node* head = malloc(sizeof(node));
    head->next=NULL;
    insertl(head,10);
    insertl(head,20);
    insertl(head,30);
    deletel(head);
    insertl(head,40);
    print(head);
    return 0;
}
void print(node* head) {
    if(head!=NULL) {
        printf("%d \n",head->data);
        print(head->next);
    }
}
void insertl(node* head,int val) {
    node* temp;
    node* ptr=malloc(sizeof(node));
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=ptr;
    ptr->next=NULL;
    ptr->data=val;
}   
void deletel(node * head) {
    node* temp;
    for(temp=head;temp->next->next!=NULL;temp=temp->next);
    free(temp->next);

}