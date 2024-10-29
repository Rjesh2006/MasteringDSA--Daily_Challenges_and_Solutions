#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;


class Node{
    public:
      int data;
      Node* next;
      Node* back;

    Node( int value , Node* agla, Node* peecchceks){
        data=value;
        next=agla;
        back= peecchceks;


    }


    Node(int data1){
        data= data1;
        next= nullptr;
        back=nullptr;

    }



};

Node* convert_into_list(vector<int> arr){
    Node* head= new Node(arr[0]);
    Node* previous= head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* Temp=new Node(arr[i]);
        previous->next=Temp;
        previous=Temp;



    }
    return head;


}


void print_the_list(Node* head){
    Node* temp= head;
    while (temp)
    {
       cout<<temp->data<<" ";
       temp=temp->next;


    }
    cout<<endl;

}
Node* merge_k_sorted_lists(vector<Node*>& list_of_node_arr) {
    // Comparator for the priority queue to sort based on node values
    auto compare = [](pair<int, Node*> p1, pair<int, Node*> p2) {
        return p1.first > p2.first; // Compare based on the integer values
    };

    priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, decltype(compare)> pq(compare);

    // Push the head of each linked list into the priority queue
    for (int i = 0; i < list_of_node_arr.size(); i++) {
        if (list_of_node_arr[i]) {  // Corrected from list_of_node_ar to list_of_node_arr
            pq.push({list_of_node_arr[i]->data, list_of_node_arr[i]});
        }
    }

    Node* dummyNode = new Node(-1); // Dummy node to simplify merging
    Node* temp = dummyNode; // Pointer to build the new merged list

    // Merge the k sorted linked lists
    while (!pq.empty()) {  // Corrected from !pq.empty to !pq.empty()
        auto it = pq.top(); // Get the smallest element
        pq.pop(); // Remove it from the queue

        temp->next = it.second; // Link the smallest node
        temp = temp->next; // Move the pointer to the next node

        // If the next node exists, push it into the priority queue
        if (it.second->next) { 
            pq.push({it.second->next->data, it.second->next}); // Add the next node to the queue
        }
    }

    return dummyNode->next; // Return the merged list, skipping the dummy node
}






int main() {
    vector<Node*> list_array;
    list_array.push_back(convert_into_list({1, 2,3 })); // First linked list
    list_array.push_back(convert_into_list({3, 6, 9})); // Second linked list
    list_array.push_back(convert_into_list({6,9,10})); // Third linked list

    Node* merglisthead = merge_k_sorted_lists(list_array); // Merge the k sorted linked lists

    print_the_list(merglisthead); // Print the merged linked list

    return 0;
}
