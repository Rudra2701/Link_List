#ifndef SINGLYLINKED_H
#define SINGLYLINKED_H



void insertl(node* head,void* val);
void deletel(node* head);
node* insertf(node* head,void* val);
node* deletef(node* head);
void insertm(node* head,void* val,int index);
void deletem(node* head,int index);
#endif