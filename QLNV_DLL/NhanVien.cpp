#include "NhanVien.h"
#include <iomanip>
#include "Utils.h"

NhanVien::NhanVien() { luongCoBan = 0; }

NhanVien::NhanVien(string ma, string ten, string phong, double luong) {
    maNV = ma; hoTen = ten; phongBan = phong; luongCoBan = luong;
}

string NhanVien::getMaNV() { return maNV; }
string NhanVien::getHoTen() { return hoTen; }
double NhanVien::getLuong() { return luongCoBan; }

void NhanVien::Nhap() {
    cin.ignore();
    cout << "Nhap Ma NV: ";
    getline(cin, maNV);

    cout << "Nhap Ho Ten: ";
    getline(cin, hoTen);

    cout << "Nhap Phong Ban: ";
    getline(cin, phongBan);

    // THAY THẾ ĐOẠN WHILE DÀI DÒNG CŨ BẰNG 1 DÒNG NÀY:
    luongCoBan = Utils::NhapSoDuong("Nhap Luong Co Ban: ");
}

void NhanVien::Xuat() {
    cout << left
        << setw(10) << maNV
        << setw(25) << hoTen
        << setw(15) << phongBan
        << setw(15) << Utils::FormatVND((long long)luongCoBan)
        << endl;
}
