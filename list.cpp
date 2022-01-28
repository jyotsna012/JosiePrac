#include "list.h"

void build(node * & head) {
  srand((unsigned)time(0));
  node* current = new node();
  current->data = (rand()%10 + 1);
  head = current;
  node* previous = current;
  int additionalValues = (rand()&5);
  for (int a = 0; a < 15+additionalValues; a++) {
    current = new node();
    previous->next = current;
    current->data = (rand()%10 + 1);
    previous = current;
  }
  current->next = NULL;
}

void display_all(node * head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

void addFirstAndLast(node * head){
  
  node * follow = new node();
  follow -> next = head;
  int first = head -> data;
  cout << "first: " << first << endl;
  int last;
  
  while(head != NULL){
    follow = head;
    head = head -> next;
  }

  last = follow -> data;
  int sum = first + last;
  cout << "sum " << sum << endl;
  
}

void SecondToLast(node * head){
  
  node * follow = new node();
  follow -> next = head;
  
while(head -> next -> next != NULL){
  
  follow = head;
  head = head -> next;

}
  follow -> next = head -> next;
  cout << "num" << head -> data << endl;
}

void swap(node * head){
  
    
  node * follow = new node();
  follow -> next = head;
    
  node * start = new node();
  start -> next = head;
  
  node * second = new node();
  second -> next = head -> next;
  
  node * temp = new node();

  while(head -> next -> next != NULL){
   follow = head;
   head = head -> next;
  }
  
  start = start -> next;
  second = second -> next;;
  temp = head -> next;
  
  head -> next = second;
  follow -> next = start;
  start -> next = temp;
  
}




