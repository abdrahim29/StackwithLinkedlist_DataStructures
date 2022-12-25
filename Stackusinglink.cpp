#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;
    }
};
class Stacklink
{
public:
    Node *top;

    Stacklink()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void nodePush(Node *n)
    {
        if (isEmpty())
        {
            top = n;
            cout << "empty list pushed: ";
        }
        else
        {
            Node *temp = top;
            top = n;
            n->next = temp;
            cout << "pushed\n";
        }
    }
    Node *nodePop()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "nothing to pop";
        }
        else
        {
            temp = top;
            top = top->next;
            cout<<"\nnode popped with data "<<temp->data;
        }
        return temp;
    }
    void print()
    {
        Node *temp = top;
        if (temp == NULL)
        {
            cout << "empty list";
        }
        else
        {
            while (temp != NULL)
            {

                cout << temp->key << "," << temp->data;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    int k1, d1;
    Stacklink s;
    Node *n1 = new Node();

    cout<<"enter key: ";
    cin>>k1;
    cout<<"enter data: ";
    cin>>d1;

    n1->key = k1;
    n1->data = d1;

    s.nodePush(n1);
    s.print();

    s.nodePop();
    s.print();

    return 0;
}