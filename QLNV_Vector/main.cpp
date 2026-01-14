#include <iostream>
#include <vector>
#include <iomanip>
#include "NhanVien.h"

using namespace std;

// ========== IMPLEMENT METHOD ==========
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

// ========== MAIN ==========
int main() {
    vector<NhanVien> ds;
    int choice;

    do {
        cout << "\n===== QLNV (VECTOR VERSION) =====\n";
        cout << "1. Them nhan vien\n";
        cout << "2. Hien thi danh sach\n";
        cout << "3. Tim theo ma\n";
        cout << "4. Tong quy luong\n";
        cout << "5. Loc theo luong\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            NhanVien nv;
            nv.nhap();
            ds.push_back(nv);   // vector
        }
        else if (choice == 2) {
            cout << left << setw(10) << "Ma NV"
                << setw(20) << "Ho ten"
                << setw(15) << "Phong ban"
                << setw(10) << "Luong" << endl;

            for (const auto& nv : ds)
                nv.xuat();
        }
        else if (choice == 3) {
            string ma;
            cout << "Nhap ma NV: ";
            getline(cin, ma);

            bool found = false;
            for (const auto& nv : ds) {
                if (nv.getMaNV() == ma) {
                    nv.xuat();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Khong tim thay!\n";
        }
        else if (choice == 4) {
            double tong = 0;
            for (const auto& nv : ds)
                tong += nv.getLuongCoBan();

            cout << "Tong quy luong: " << tong << endl;
        }
        else if (choice == 5) {
            double minLuong;
            cout << "Nhap luong toi thieu: ";
            cin >> minLuong;
            cin.ignore();

            for (const auto& nv : ds) {
                if (nv.getLuongCoBan() >= minLuong)
                    nv.xuat();
            }
        }

    } while (choice != 0);

    return 0;
}
