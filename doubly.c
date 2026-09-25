#include <stdlib.h>
struct node  {
    struct node* back;
    void* data;
    struct node* next;
};
typedef struct node node;
void insertl(node* head, int val) {
    node *ptr=malloc(sizeof(node)), *temp;
    ptr->next=NULL;
    ptr->data=malloc(sizeof(val));
    *(int*)(ptr->data)=val;
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=ptr;
    ptr->back=temp;
}
void deletel(node * head) {
    node* temp;
    if (head == NULL || head->next == NULL) return;
    for(temp=head;temp->next->next!=NULL;temp=temp->next);
    free(temp->next->data);
    free(temp->next);
    temp->next=NULL;
}
node* insertf(node* head,int val) {
    node *ptr=(node*)malloc(sizeof(node));
    head->back=ptr;
    ptr->next=head;
    if (head != NULL) head->back = ptr;
    ptr->data=malloc(sizeof(val));
    *(int*)(ptr->data)=val;
    return ptr;
}
node* deletef(node* head) {
    node* temp=head->next;
    temp->back=NULL;
    temp->next->back=temp;
    free(head->data);
    free(head);
    return temp;
}
void insertm(node* head,int val,int index) {
    int i=0;
    node *temp, *ptr=(node*)malloc(sizeof(node));
    ptr->data=malloc(sizeof(val));
    *(int*)(ptr->data)=val;
    for (temp=head; i < index-1; i++) temp=temp->next;
    ptr->next=temp->next;
    temp->next->back=ptr;
    ptr->back=temp;
    temp->next=ptr;

}
void deletem(node* head,int index) {
    int i=0;
    node *temp, *ptr;
    for (temp=head;i<index-1;i++) {temp=temp->next;}
    ptr=temp->next;
    temp->next=temp->next->next;
    if (temp->next != NULL) temp->next->back = temp;
    free(ptr->data);
    free(ptr);
}
 /* Copyright (C) 2026  Rudra Shivhare

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.*/