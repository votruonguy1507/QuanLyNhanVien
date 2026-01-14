#pragma once
#include "Node.h"

class QuanLyNhanVien {
private:
    Node* head;
    Node* tail;

public:
    QuanLyNhanVien();
    ~QuanLyNhanVien(); // giải phóng bộ nhớ

    void themNhanVien(const NhanVien& nv);
    void hienThiDanhSach() const;
    Node* timTheoMa(const string& ma) const;

    double tinhTongLuong() const;
    void locTheoLuong(double minLuong) const;

    // TODO: thêm xóa / sửa nếu cần
};
