// Singly Linked List Operations

void insertAtBeginning(Node*& head, int x) {
    Node* newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(Node*& head, int x, int position) {
    if (position == 0) {
        insertAtBeginning(head, x);
        return;
    }
    Node* temp = head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    Node* newNode = new Node(x);
    newNode->next = temp->next;
    temp->next = newNode;
}

void removeFromBeginning(Node*& head) {
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void removeFromPosition(Node*& head, int position) {
    if (position == 0) {
        removeFromBeginning(head);
        return;
    }
    Node* temp = head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

void search(Node* head, int x) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == x) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

















// doubly starts




// Doubly Linked List Operations

void insertAtBeginning(DoublyNode*& head, int x) {
    DoublyNode* newNode = new DoublyNode(x);
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtEnd(DoublyNode*& head, int x) {
    DoublyNode* newNode = new DoublyNode(x);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    DoublyNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void removeFromBeginning(DoublyNode*& head) {
    if (head != nullptr) {
        DoublyNode* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
    }
}

void removeFromEnd(DoublyNode*& head) {
    if (head != nullptr) {
        DoublyNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        if (temp->prev != nullptr) {
            temp->prev->next = nullptr;
        } else {
            head = nullptr;
        }
        delete temp;
    }
}
