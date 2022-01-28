#include "list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display_all(head);
    swap(head);
    //SecondToLast(head);
    //addFirstAndLast(head);


    display_all(head);
    
    return 0;
}
