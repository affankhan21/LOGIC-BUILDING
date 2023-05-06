#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    public:
        PNODE First;
        SinglyLL();
};

SinglyLL :: SinglyLL()
{
    First = NULL;
}

int main()
{
    SinglyLL obj();
    
    return 0;
}