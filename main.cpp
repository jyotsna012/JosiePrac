#include "list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display_all(head);
    add(head,333);
    //SecondToLast(head);
    //addFirstAndLast(head);


    display_all(head);
    
    return 0;
}
