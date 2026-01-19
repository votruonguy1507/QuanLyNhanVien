#pragma once
#include "Node.h" // Quản lý cần dùng Node

class QuanLyNhanVien {
private:
    Node* head;
    Node* tail;

    // Hàm phụ trợ
    void ThemNodeVaoDanhSach(NhanVien nv);

public:
    QuanLyNhanVien();
    ~QuanLyNhanVien(); // Destructor giải phóng bộ nhớ

    void ThemNhanVien();
    void ThemSanNhanVien(string ma, string ten, string phong, double luong);
    void HienThiTatCa();
    void TimKiemTheoMa();
    void TinhTongLuong();
    void LocTheoLuong();

    // Chức năng mới nhóm yêu cầu
    void XoaNhanVien();
};
