#include <iostream>
#include <stack>
using namespace std;
struct node {
    int data;
    struct node* next;
};
typedef struct node Node;
Node *newnode;
stack<Node>myStack; 
stack<Node>reversestack;

int main() {
    
    for(int i=0; i<10 ; i++)
    {
    newnode = new Node;
    newnode->data = i;
    newnode->next = 0;

    myStack.push(*newnode);
    }

    while (!myStack.empty()) {
        Node temp= myStack.top();
        cout << temp.data << " ";
        myStack.pop();
        reversestack.push(temp);
    }
    int n= myStack.size();
    cout << n << endl;
    printf("\n");
    
    while (!reversestack.empty()) 
    {
        Node temp= reversestack.top();
        cout << temp.data << endl;
        
        reversestack.pop();
        //reversestack.push(temp);
    }

   

    return 0;
}
