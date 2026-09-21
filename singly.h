#ifndef SINGLYLINKED_H
#define SINGLYLINKED_H

struct node {
    void* data;
    struct node* next;
};
typedef struct node node;

void insertl(node* head,int val);
void deletel(node* head);
node* insertf(node* head,int val);
node* deletef(node* head);
void insertm(node* head,int val,int index);
void deletem(node* head,int index);
#endif
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