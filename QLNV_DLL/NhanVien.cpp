#include "NhanVien.h"
#include <iostream>
#include <iomanip>
using namespace std;

NhanVien::NhanVien() : luongCoBan(0) {}

NhanVien::NhanVien(string ma, string ten, string pb, double luong)
    : maNV(ma), hoTen(ten), phongBan(pb), luongCoBan(luong) {
}

string NhanVien::getMaNV() const { return maNV; }
string NhanVien::getHoTen() const { return hoTen; }
string NhanVien::getPhongBan() const { return phongBan; }
double NhanVien::getLuongCoBan() const { return luongCoBan; }

void NhanVien::setHoTen(string ten) { hoTen = ten; }
void NhanVien::setPhongBan(string pb) { phongBan = pb; }
void NhanVien::setLuongCoBan(double luong) { luongCoBan = luong; }

void NhanVien::nhap() {
    cout << "Ma NV: ";
    getline(cin, maNV);
    cout << "Ho ten: ";
    getline(cin, hoTen);
    cout << "Phong ban: ";
    getline(cin, phongBan);
    cout << "Luong co ban: ";
    cin >> luongCoBan;
    cin.ignore();
}

void NhanVien::xuat() const {
    cout << left << setw(10) << maNV
        << setw(20) << hoTen
        << setw(15) << phongBan
        << setw(10) << luongCoBan << endl;
}
