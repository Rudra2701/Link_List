#include <stdlib.h>

/**/
void insertl(node* head,void* val) {
    node* temp;
    node* ptr=(node*)malloc(sizeof(node));
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=ptr;
    ptr->next=NULL;
    ptr->data=val;
}   
void deletel(node * head) {
    node* temp;
    if (head == NULL || head->next == NULL) return;
    for(temp=head;temp->next->next!=NULL;temp=temp->next);
    free(temp->next);

}
void insertf(node* head,void* val) {
    node* ptr=(node*)malloc(sizeof(node));
    ptr->next=head;
    ptr->data=val;
}
node* deletef(node* head) {
    node* temp=head->next;
    free(head);
    return head;
}
void insertm(node* head,void* val,int index) {
    int i=0;
    node* temp, ptr;
    ptr->data=val
    for (temp=head;i==index-1;i++) {temp=temp->next;}
    ptr->next=temp->next;
    temp->next=ptr;

}
void deletem(node* head,int index) {
    node* temp,ptr;
    for (temp=head;i==index-1;i++) {temp=temp->next;}
    ptr=temp->next;
    temp->next=temp->next->next
    free(ptr);
}