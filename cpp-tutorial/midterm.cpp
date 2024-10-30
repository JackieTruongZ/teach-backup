#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Thêm phần tử vào cuối danh sách
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Xóa phần tử từ đầu danh sách
    void dequeue() {
        if (!head) return; // Nếu danh sách rỗng
        Node* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        delete temp;
        if (!head) tail = nullptr; // Cập nhật tail nếu danh sách rỗng
    }

    // Hiển thị danh sách
    void display() {
        Node* current = head;
        cout<<"[";
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout<<"]";
        cout << endl;
    }

    // Tìm kiếm phần tử
    Node* search(int value) {
        Node* current = head;
        while (current) {
            if (current->data == value) {
                return current;
            }
            current = current->next;
        }
        return nullptr; // Không tìm thấy
    }

    // Sắp xếp danh sách (sử dụng Bubble Sort cho đơn giản)
    void sort() {
        if (!head) return;
        bool swapped;
        do {
            swapped = false;
            Node* current = head;
            while (current->next) {
                if (current->data > current->next->data) {
                    std::swap(current->data, current->next->data);
                    swapped = true;
                }
                current = current->next;
            }
        } while (swapped);
    }

    // Hợp nhất với danh sách khác
    void merge(DoublyLinkedList& other) {
        if (!other.head) return; // Nếu danh sách khác rỗng
        if (!head) {
            head = other.head;
            tail = other.tail;
        } else {
            tail->next = other.head;
            other.head->prev = tail;
            tail = other.tail;
        }
        other.head = nullptr; // Đặt danh sách khác thành rỗng
        other.tail = nullptr;
    }
};

int main() {
    DoublyLinkedList queue;
    cout<<"Hang doi ban dau \n";
    queue.display();
    cout<<"Them 10 vao hang doi \n";
    queue.enqueue(10);
    queue.display();
    cout<<"Them 20 vao hang doi \n";
    queue.enqueue(20);
    queue.display();
    cout<<"Them 30 vao hang doi \n";
    queue.enqueue(30);

    queue.display(); // Hiển thị: 10 20 30

    cout<<"Xoa phan tu dau hang doi \n";
    queue.dequeue();
    queue.display(); // Hiển thị: 20 30

    cout<<"Tim kiem phan tu 20 trong hang doi \n";
    Node* found = queue.search(20);
    if (found) {
        cout << "Found: " << found->data << std::endl;
    } else {
        cout<<"Not Found";
    }

    cout<<"Tao queue 2 va them cac phan tu 25 15 10 \n";
    DoublyLinkedList queue2;
    queue2.enqueue(15);
    queue2.enqueue(25);
    queue2.enqueue(10);
    cout << "hang doi 2: ";
    queue2.display(); // Hiển thị: 15 25 10

    cout<<"hop nhat hang doi 2 vao hang doi ban dau \n";
    queue.merge(queue2);

    queue.display();

    cout<<"Sap xep hang doi \n";
    queue.sort();
    queue.display(); // Hiển thị: 10 15 20 25 30

    return 0;
}