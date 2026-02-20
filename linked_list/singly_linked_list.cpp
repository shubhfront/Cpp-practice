#include <iostream>
#include <list>
using namespace std;

class Node {
    public :
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;
    
public:
    List(){
        head = tail = NULL;
    }
    
    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else 
        {
            newNode->next = head;
            head = newNode;
        }
    }
    
    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "LL is empty";
            return;
        }
        Node* temp = tail;
        temp->next = tail;
    }

    void find(int val)
    {
        Node* temp = head;
        
        int i = 1;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                cout << "The element is present at " << i << "th place";
                return;
            }
            else
            {
                i++;
                temp = temp->next;
            }
        }
    }
    
    void Print_ll()
    {
        Node* temp = head;
        
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    List ll;
    
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    
    ll.push_back(4);
    ll.Print_ll();
    ll.pop_front();
    
    ll.Print_ll();
    
    return 0;
}
