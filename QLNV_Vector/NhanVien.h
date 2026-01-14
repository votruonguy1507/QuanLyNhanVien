#pragma once
#pragma once
#include <string>
using namespace std;

class NhanVien {
private:
    string maNV;
    string hoTen;
    string phongBan;
    double luongCoBan;

public:
    NhanVien() : luongCoBan(0) {}
    NhanVien(string ma, string ten, string pb, double luong)
        : maNV(ma), hoTen(ten), phongBan(pb), luongCoBan(luong) {
    }

    string getMaNV() const { return maNV; }
    string getHoTen() const { return hoTen; }
    string getPhongBan() const { return phongBan; }
    double getLuongCoBan() const { return luongCoBan; }

    void nhap();
    void xuat() const;
};
