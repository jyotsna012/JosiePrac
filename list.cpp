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
  start -> next = temp;
  follow -> next = start;
  
    while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

void add(node ** head, int val){

 // 1. allocate node
    Node* new_node = new Node();
   
    // Used in step 5
    Node *last = *head;
   
    // 2. Put in the data
    new_node->data = val; 
   
    // 3. This new node is going to be 
    // the last node, so make next of 
    // it as NULL
    new_node->next = NULL; 
   
    // 4. If the Linked List is empty,
    // then make the new node as head
    if (*head == NULL) 
    { 
        *head = new_node; 
        return; 
    } 
   
    // 5. Else traverse till the last node
    while (last->next != NULL)
    {
        last = last->next; 
    }
   
    // 6. Change the next of last node
    last->next = new_node; 
    return;
 
}




