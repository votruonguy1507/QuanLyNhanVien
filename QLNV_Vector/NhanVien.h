#include <string>
#include <iostream>
using namespace std;

class NhanVien {
private:
    string maNV;
    string hoTen;
    string phongBan;
    double luongCoBan;

public:
    NhanVien();
    NhanVien(string ma, string ten, string phong, double luong);

    // Getter
    string getMaNV();
    string getHoTen();
    double getLuong();

    // Hàm xử lý
    void Nhap();
    void Xuat();
};

