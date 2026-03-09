#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1){
        this->data = data1;
        this->next = nullptr;
    }
    Node(int data1,Node* next){
        this->data = data1;
        this->next = next;
    }
    static bool searchNode(Node* head,int value){
        Node* temp = head;
        while(temp!=nullptr){
            if(temp->data == value){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

};

int main(){
    int value =10;
    Node* head= new Node(100);
    head->next = new Node(5);
    head->next->next = new Node(200);
    bool result = Node::searchNode(head,value);
    cout << result << endl;
}