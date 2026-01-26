#include "QuanLyNhanVien.h"
#include "Utils.h"

int main() {
    // khai bao class QuanLyNhanVien
    QuanLyNhanVien ql;

    // de them trc du lieu nv vao list
    ql.ThemSanNhanVien("NV01", "Nguyen Van A", "Ke Toan", 12000000);
    ql.ThemSanNhanVien("NV02", "Tran Thi B", "Nhan Su", 9000000);

    // khai bao bien de xdinh lua chon cua ng dung 
    int chon;
    do {
        Utils::XoaManHinh(); // Xóa màn hình cho sạch


    // hien thi ra menu co 6 op tu 1 den 6 va 0 de thoat ctrinh 
        cout << "\n=== MENU QUAN LY NHAN VIEN ===\n";
        cout << "1. Them nhan vien moi\n";
        cout << "2. Hien thi danh sach nhan vien\n";
        cout << "3. Xoa nhan vien\n";
        cout << "4. Tim kiem nhan vien theo ma\n";
        cout << "5. Tinh tong quy luong\n";
        cout << "6. Loc nhan vien theo muc luong\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "Lua chon cua ban: ";

        

        if (!(cin >> chon)) {
            cin.clear(); cin.ignore(100, '\n'); chon = -1;
        }

        // tuong ung vs menu o tren thi day la sw case de xu ly op cua menu
        switch (chon) {
        case 1: ql.ThemNhanVien(); break;// function 
        case 2: ql.HienThiTatCa(); break;
        case 4: ql.TimKiemTheoMa(); break;
        case 5: ql.TinhTongLuong(); break;
        case 6: ql.LocTheoLuong(); break;
        case 0: cout << "Ket thuc chuong trinh.\n"; break;
        default: cout << "Sai lua chon!\n";
        }

        if (chon != 0) {
            Utils::DungManHinh(); // Dừng màn hình để xem kết quả
        }

    } while (chon != 0);

    return 0;
}