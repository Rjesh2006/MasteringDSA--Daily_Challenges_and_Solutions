#include <iostream>
using namespace std;

class Node {
public:
    string data;  // URL data
    Node* next;
    Node* back;
    Node* random;

    Node(string data1, Node* next1 = nullptr, Node* prev1 = nullptr, Node* randm = nullptr) {
        data = data1;
        next = next1;
        back = prev1;
        random = randm;
    }
};

class Browser {
public:
    Node* current_page;

    Browser(string& homepage) {
        current_page = new Node(homepage);
    }
};

void visit(string& url, Node*& current_page) { 
    Node* newnode = new Node(url);
    current_page->next = newnode;
    newnode->back = current_page;
    current_page = newnode;
}

string back(int steps, Node* current_page) {
    while (steps) {
        if (current_page->back) {
            current_page = current_page->back;
        } else {
            break;
        }
        steps--;
    }
    return current_page->data;
}

string front(int steps, Node* current_page) {
    while (steps) {
        if (current_page->next) {
            current_page = current_page->next;
        } else {
            break;
        }
        steps--;
    }
    return current_page->data;
}

void printnode(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    string homepage = "home.com";
    Browser browser(homepage);
    cout << "Current Page: " << browser.current_page->data << endl;

    // Visiting new URLs here 
    string url1 = "page1.com";
    string url2 = "page2.com";
    string url3 = "page3.com";

    visit(url1, browser.current_page);
    cout << "Visited: " << browser.current_page->data << endl;

    visit(url2, browser.current_page);
    cout << "Visited: " << browser.current_page->data << endl;

    visit(url3, browser.current_page);
    cout << "Visited: " << browser.current_page->data << endl;

    // Going back to the any page or forward to the anypage 
    cout << "Back to: " << back(1, browser.current_page) << endl;
    cout << "Back to: " << back(2, browser.current_page) << endl;
    cout << "Forward to: " << front(1, browser.current_page) << endl;


    return 0;
}
