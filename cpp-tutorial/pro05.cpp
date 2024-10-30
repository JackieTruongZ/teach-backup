#include <iostream>
using namespace std;

// hàm trả về giá trị 
// trả về một giá trị gì đấy 
// <kiểu dữ liệu - kiểu dữ liệu của giá trị trả về > <tên của hàm số > (<các tham số - <kiểu dữ liệu của tham số> <tên tham số>) {}

    int tongHaiSo(int a , int b) {
        int tong = a+b;
        return tong;
    }
// hàm không trả về giá trị 
// void <tên hàm > (các tham số) {}
    void inTongHaiso(int a,int b);

int main() {
    int c = 10,d= 20;

    // int tong = tongHaiSo(c,10);
    // cout<<tong;

    inTongHaiso(c,d);
}

void inTongHaiso(int a,int b) {
        cout<< a+b;
    }