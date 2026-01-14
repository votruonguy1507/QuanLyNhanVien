#include <iostream>
#include "QuanLyNhanVien.h"
using namespace std;

int main() {
    QuanLyNhanVien ql;
    int choice;

    do {
        cout << "\n===== QUAN LY NHAN VIEN =====\n";
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
            ql.themNhanVien(nv);
        }
        else if (choice == 2) {
            ql.hienThiDanhSach();
        }
        else if (choice == 3) {
            string ma;
            cout << "Nhap ma NV: ";
            getline(cin, ma);
            Node* found = ql.timTheoMa(ma);
            if (found)
                found->data.xuat();
            else
                cout << "Khong tim thay!\n";
        }
        else if (choice == 4) {
            cout << "Tong quy luong: " << ql.tinhTongLuong() << endl;
        }
        else if (choice == 5) {
            double m;
            cout << "Nhap luong toi thieu: ";
            cin >> m;
            cin.ignore();
            ql.locTheoLuong(m);
        }

    } while (choice != 0);

    return 0;
}
