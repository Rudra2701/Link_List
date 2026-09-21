#include <stdlib.h>
struct node {
    void* data;
    struct node* next;
};
typedef struct node node;
/**/
void insertl(node* head,int val) {
    if (head == NULL) return;
    node* temp;
    node* ptr=(node*)malloc(sizeof(node));
    for(temp=head;temp->next!=head;temp=temp->next);
    temp->next=ptr;
    ptr->next=head;
    ptr->data=malloc(sizeof(val));
    *(int*)(ptr->data)=val;
}   
void deletel(node * head) {
    node* temp;
    if (head == NULL || head->next == head) return;
    for(temp=head;temp->next->next!=head;temp=temp->next);
    node* del = temp->next;
    temp->next = head;
    free(del->data);
    free(del);

}
node* insertf(node* head,int val) {
    node *last;
    node* ptr=(node*)malloc(sizeof(node));
    for(last=head;last->next!=head;last=last->next);
    last->next= ptr;
    ptr->next=head;
    ptr->data=malloc(sizeof(val));
    *(int*)(ptr->data)=val;
    return ptr;
}
node* deletef(node* head) {
    node *temp, *last;
    if (head == NULL || head->next == head) return head;
    for(last=head;last->next!=head;last=last->next);
    last->next=head->next;
    temp=head->next;
    free(head);
    return temp;
}
void insertm(node* head,int val,int index) {
    int i=0;
    node *temp, *ptr;
    ptr=malloc(sizeof(node));
    ptr->data=malloc(sizeof(val));
    *(int*)(ptr->data)=val;
    for (temp=head;i<index-1;i++) {temp=temp->next;}
    ptr->next=temp->next;
    temp->next=ptr;
}
void deletem(node* head,int index) {
    int i=0;
    node *temp, *ptr;
    for (temp=head;i<index-1;i++) {temp=temp->next;}
    ptr=temp->next;
    temp->next=temp->next->next;
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