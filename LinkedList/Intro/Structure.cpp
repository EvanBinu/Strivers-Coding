#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next ){
        data = data1;
        next = next;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
int main(){
    Node* y = new Node(100);
    cout << y << endl;
    cout << y->data << endl;
    cout << y->next << endl;
}