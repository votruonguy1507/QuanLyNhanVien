#pragma once
#include "NhanVien.h"
#include <vector> // Thư viện mảng động
#include <iostream>
using namespace std;

class QuanLyNhanVien {
private:
    // KHÔNG DÙNG Node* head, tail
    // Thay bằng Vector:
    vector<NhanVien> danhSach;

public:
    QuanLyNhanVien();
    // Vector tự giải phóng bộ nhớ nên không cần Destructor phức tạp

    void ThemNhanVien();
    void ThemSanNhanVien(string ma, string ten, string phong, double luong);
    void HienThiTatCa();
    void TimKiemTheoMa();
    void TinhTongLuong();
    void LocTheoLuong();
    void XoaNhanVien(); // Hàm xóa (Code cực ngắn so với Linked List)
}; 
