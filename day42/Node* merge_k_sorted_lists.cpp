#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int value, Node* agla, Node* peecchceks) {
        data = value;
        next = agla;
        back = peecchceks;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convert_into_list(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* previous = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* Temp = new Node(arr[i]);
        previous->next = Temp;
        previous = Temp;
    }
    return head;
}

void print_the_list(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* merge_k_sorted_lists(vector<Node*>& list_of_node_arr) {
    auto compare = [](pair<int, Node*> p1, pair<int, Node*> p2) {
        return p1.first > p2.first;
    };

    priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, decltype(compare)> pq(compare);

    for (int i = 0; i < list_of_node_arr.size(); i++) {
        if (list_of_node_arr[i]) {
            pq.push({list_of_node_arr[i]->data, list_of_node_arr[i]});
        }
    }

    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;

    while (!pq.empty()) {
        auto it = pq.top();
        pq.pop();

        temp->next = it.second;
        temp = temp->next;

        if (it.second->next) {
            pq.push({it.second->next->data, it.second->next});
        }
    }

    return dummyNode->next;
}

int main() {
    vector<Node*> list_array;
    list_array.push_back(convert_into_list({1, 2, 3}));
    list_array.push_back(convert_into_list({3, 6, 9}));
    list_array.push_back(convert_into_list({6, 9, 10}));


   for (int  i = 0; i <list_array.size(); i++){
    Node* current = list_array[i];

    cout<<"here we have the list ("<< i << ")---> node's are :";
    while (current )
    {
       cout<<current->data<<" ";
       current=current->next;
    }
    cout<<endl;

   }
   cout<<endl<<"Merged vector_array_of_list_of_Node's Aare :"<<"--> ";
    Node* merglisthead = merge_k_sorted_lists(list_array);
    print_the_list(merglisthead);

    return 0;


}
