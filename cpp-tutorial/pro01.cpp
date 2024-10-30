#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream inFile("timmax.inp");
    ofstream outFile("out.out");

    outFile << "hello";
    // Kiểm tra xem file có mở thành công không
    if (!inFile.is_open()) {
        cerr << "Không thể mở file input.inp.\n";
        return 1;
    }

    int n;
    inFile >> n; // Đọc số tự nhiên n

    // Kiểm tra giá trị n
    if (n <= 0) {
        cerr << "Giá trị n phải lớn hơn 0.\n";
        return 1;
    }

    vector<int> A(n); // Khởi tạo vector A với n phần tử

    // Đọc các giá trị vào dãy A
    for (int i = 0; i < n; ++i) {
        inFile >> A[i];
    }

    inFile.close(); // Đóng file sau khi đọc

    // In dãy A ra màn hình
    cout << "Dãy A: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << std::endl;

    return 0;
}
