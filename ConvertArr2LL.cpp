#include <bits/stdc++.h>
using namespace std;
class Node {               //In summary, Node is the actual object or instance of the Node class, 
    public:                //while Node* is a pointer that holds the memory address of a Node object.
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){   // this is the constructor
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){   // this is another constructor
        data = data1;
        next = nullptr; //with this declration we don't need to pass nullptr argument again and again it will take it automatically even if not given
    }

    };
    Node* convertArr2LL(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i = 1; i<arr.size();i++){
            Node* temp = new Node(arr[0]);
            mover->next = temp;
            mover = temp;
        }
        return head;
}       

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    cout << head->data<<endl;
    cout << head->next;
    // Node* y = new Node(arr[2]); // new gives a new pointer to the memory location where you can store it
    // cout << y->data<< endl;
    // cout << y->next;
    
    return 0;
}