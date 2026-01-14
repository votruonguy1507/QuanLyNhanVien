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
    NhanVien();
    NhanVien(string ma, string ten, string pb, double luong);

    string getMaNV() const;
    string getHoTen() const;
    string getPhongBan() const;
    double getLuongCoBan() const;

    void setHoTen(string ten);
    void setPhongBan(string pb);
    void setLuongCoBan(double luong);

    void nhap();
    void xuat() const;
};
