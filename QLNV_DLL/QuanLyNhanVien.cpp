#include "QuanLyNhanVien.h"
#include <iostream>
#include <iomanip>
using namespace std;

QuanLyNhanVien::QuanLyNhanVien() : head(nullptr), tail(nullptr) {}

QuanLyNhanVien::~QuanLyNhanVien() {
    Node* cur = head;
    while (cur) {
        Node* temp = cur;
        cur = cur->next;
        delete temp;
    }
}

void QuanLyNhanVien::themNhanVien(const NhanVien& nv) {
    Node* newNode = new Node(nv);
    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void QuanLyNhanVien::hienThiDanhSach() const {
    cout << left << setw(10) << "Ma NV"
        << setw(20) << "Ho ten"
        << setw(15) << "Phong ban"
        << setw(10) << "Luong" << endl;

    for (Node* cur = head; cur != nullptr; cur = cur->next) {
        cur->data.xuat();
    }
}

Node* QuanLyNhanVien::timTheoMa(const string& ma) const {
    for (Node* cur = head; cur != nullptr; cur = cur->next) {
        if (cur->data.getMaNV() == ma)
            return cur;
    }
    return nullptr;
}

double QuanLyNhanVien::tinhTongLuong() const {
    double tong = 0;
    for (Node* cur = head; cur != nullptr; cur = cur->next) {
        tong += cur->data.getLuongCoBan();
    }
    return tong;
}

void QuanLyNhanVien::locTheoLuong(double minLuong) const {
    for (Node* cur = head; cur != nullptr; cur = cur->next) {
        if (cur->data.getLuongCoBan() >= minLuong) {
            cur->data.xuat();
        }
    }
}
