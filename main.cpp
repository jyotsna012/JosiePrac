#include "list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display_all(head);
    deleteSecondToLast(head);
    //addFirstAndLast(head);


    display_all(head);
    
    return 0;
}
