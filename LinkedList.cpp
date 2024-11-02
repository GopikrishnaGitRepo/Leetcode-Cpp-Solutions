// Understand the question very well and understand its solution
#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node() {}
    Node(int value) : val(value), next(nullptr) {} 
};

//LeetCode
class Solution {
   int c=0;
public:
    Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* newnode = new Node();
        int* carry = &c;
        int l1value=0;
        int l2value=0;
        if (l1 == nullptr && l2 != nullptr){
            cout << "1st" << endl;
            l1value = 0;
            l2value = l2->val;
            cout << l1value<< " " << l2value << endl;
            newnode->val = (*carry + l1value + l2value) % 10;
            cout << "carry " << *carry << "value " << newnode->val << endl;
            *carry = (*carry + l1value + l2value) / 10;
            newnode->next=addTwoNumbers(nullptr, l2->next);
        }
        else if (l2 == nullptr && l1 != nullptr){
            cout << "2nd" << endl;
            l2value = 0;
            l1value = l1->val;
            cout << l1value << " " << l2value << endl;
            newnode->val = (*carry + l1value + l2value) % 10;
            cout << "carry " << *carry << "value " << newnode->val << endl;
            *carry = (*carry + l1value + l2value) / 10;
            newnode->next=addTwoNumbers(l1->next, nullptr);
        }
        else if (l1 != nullptr && l2 != nullptr){
            cout << "3rd" << endl;
            l1value = l1->val;
            l2value = l2->val;
            cout << l1value << " " << l2value << endl;
            newnode->val = (*carry + l1value + l2value) % 10;
            cout << "carry " << *carry << "value " << newnode->val << endl;
            *carry = (*carry + l1value + l2value) / 10;
            newnode->next=addTwoNumbers(l1->next,l2->next);
        }
        else {
            cout << "End of both linked list" << endl;
            if (*carry != 0)
            {
                newnode->val=*carry;
                newnode->next=nullptr;
                return newnode;
            }
            return newnode = nullptr;
        }
        return newnode;
    }
};

// Insert into Linked List
Node* InsertIntoLinkedList(int count, int limit){
    if(count<=limit){
        Node* node = new Node(9);
        count+=1;
        node->next = InsertIntoLinkedList(count,limit);
        return node;
    }
    else
        return nullptr;
}
int PrintLinkedListValues(Node* node){
    if (node == nullptr){
        cout << "empty linked list" << endl;
        return 0;
    }
    if (node->next == nullptr){
        cout << node->val << endl;
        return 0;
    }
    else    
        cout << node->val << endl;
        PrintLinkedListValues(node->next);
    return 0;
}
int main(void){
    Solution sol;
    // Insert into linked list
    Node* newnode1 = InsertIntoLinkedList(1,7);
    Node* newnode2 = InsertIntoLinkedList(1,4);
    // Print the linked list values
    cout << "newnode1" << endl;
    PrintLinkedListValues(newnode1);
    cout << "newnode2" << endl;
    PrintLinkedListValues(newnode2);

    // LeetCode
    cout << "Add Two Numbers" << endl;
    PrintLinkedListValues(sol.addTwoNumbers(newnode1,newnode2));
    
    // // Below is the simple insertion of elements in the Linked List and to view the list
    // Node* node = new Node(2);
    // node->next = new Node(3);
    // node->next->next=new Node(4); // Automatically initialize the next pointer to nullptr
    // cout << node->val << endl;
    // cout << node->next->val << endl;
    // cout << node->next->next->val << endl;
    return 0;
}