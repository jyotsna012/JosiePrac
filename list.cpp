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

void printVal(node * head){
  int count = 0;
  while(head != NULL){
    count = count + 1;
    head = head -> next;
  }
  cout << count << endl;

  for(int i = 1; i <= count; i++){
    if(i == count - 1){
      cout << "hi" << endl;
    }
  }  
}
