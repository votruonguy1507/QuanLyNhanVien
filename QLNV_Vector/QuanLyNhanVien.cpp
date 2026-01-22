#include "QuanLyNhanVien.h"
#include "Utils.h" // Gọi Utils để nhập liệu an toàn
#include <iomanip>

QuanLyNhanVien::QuanLyNhanVien() {
    // Vector tự khởi tạo rỗng, không cần làm gì
}

void QuanLyNhanVien::ThemSanNhanVien(string ma, string ten, string phong, double luong) {
    NhanVien nv(ma, ten, phong, luong);
    danhSach.push_back(nv); // Thêm vào cuối mảng
}

void QuanLyNhanVien::ThemNhanVien() {
    NhanVien nv;
    cout << "\n--- THEM NHAN VIEN MOI (VECTOR) ---\n";
    nv.Nhap(); // Đã có validation bên NhanVien.cpp lo
    danhSach.push_back(nv);
    cout << "-> Them thanh cong!\n";
}

void QuanLyNhanVien::HienThiTatCa() {
    if (danhSach.empty()) {
        cout << "\nDanh sach trong!\n";
        return;
    }

    // Header bảng
    Utils::KeDuongKe(70);
    cout << left << setw(10) << "Ma NV" << setw(25) << "Ho Ten"
        << setw(15) << "Phong Ban" << setw(15) << "Luong CB" << endl;
    Utils::KeDuongKe(70);

    // Duyệt mảng bằng chỉ số i
    for (int i = 0; i < danhSach.size(); i++) {
        danhSach[i].Xuat();
    }
}

void QuanLyNhanVien::TimKiemTheoMa() {
    cin.ignore();
    string ma;
    cout << "\nNhap Ma can tim: ";
    getline(cin, ma);

    bool thay = false;
    for (int i = 0; i < danhSach.size(); i++) {
        if (danhSach[i].getMaNV() == ma) {
            cout << "-> Tim thay:\n";
            danhSach[i].Xuat();
            thay = true;
            break; // Tìm thấy thì dừng luôn
        }
    }
    if (!thay) cout << "-> Khong tim thay!\n";
}

void QuanLyNhanVien::TinhTongLuong() {
    double tong = 0;
    for (int i = 0; i < danhSach.size(); i++) {
        tong += danhSach[i].getLuong();
    }
    cout << "\nTong quy luong: " << fixed << setprecision(0) << tong << " VND\n";
}

void QuanLyNhanVien::LocTheoLuong() {
    // Dùng Utils để nhập số an toàn
    double m = Utils::NhapSoDuong("\nNhap muc luong toi thieu: ");

    cout << "\n--- KET QUA LOC (>= " << (long long)m << ") ---\n";
    bool co = false;
    for (int i = 0; i < danhSach.size(); i++) {
        if (danhSach[i].getLuong() >= m) {
            danhSach[i].Xuat();
            co = true;
        }
    }
    if (!co) cout << "(Khong co ket qua nao)\n";
}

// LOGIC XÓA (Ưu điểm của Vector: code rất dễ hiểu)
void QuanLyNhanVien::XoaNhanVien() {
    cin.ignore();
    string ma;
    cout << "\nNhap Ma NV can xoa: ";
    getline(cin, ma);

    for (int i = 0; i < danhSach.size(); i++) {
        if (danhSach[i].getMaNV() == ma) {
            // Lệnh xóa phần tử thứ i trong vector
            danhSach.erase(danhSach.begin() + i);
            cout << "-> Da xoa thanh cong!\n";
            return;
        }
    }
    cout << "-> Khong tim thay ma nay de xoa!\n";
}