#include <iostream>

// Định nghĩa lớp Node đại diện cho một nút trong danh sách liên kết
class Node {
public:
    int data;       // Dữ liệu của nút
    Node* next;     // Con trỏ đến nút tiếp theo trong danh sách

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Định nghĩa lớp LinkedList đại diện cho danh sách liên kết
class LinkedList {
private:
    Node* head;     // Con trỏ đến nút đầu tiên trong danh sách

public:
    LinkedList() {
        head = nullptr;
    }

    // Thêm một phần tử vào đầu danh sách
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Thêm một phần tử vào cuối danh sách
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Duyệt và in ra các phần tử trong danh sách
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList myList;

    myList.insertAtEnd(1);
    myList.insertAtEnd(2);
    myList.insertAtBeginning(3);
    myList.insertAtEnd(4);

    myList.display();    // Kết quả: 3 1 2 4

    return 0;
}
