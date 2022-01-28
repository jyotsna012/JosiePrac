//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    node * next;
    int length;
};

/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */


/* These functions are already written and can be called to test out your code */
void setLen();
//void printVal(node * head);
void build(node * & head);      //supplied
void display_all(node * head);  //supplied


