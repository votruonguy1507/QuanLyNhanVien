#include "QuanLyNhanVien.h"
#include "Utils.h"

int main() {
    QuanLyNhanVien ql;
    ql.ThemSanNhanVien("NV01", "Nguyen Van A", "Ke Toan", 12000000);
    ql.ThemSanNhanVien("NV02", "Tran Thi B", "Nhan Su", 9000000);

    int chon;
    do {
        Utils::XoaManHinh(); // Xóa màn hình cho sạch
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

        switch (chon) {
        case 1: ql.ThemNhanVien(); break;
        case 2: ql.HienThiTatCa(); break;
        case 3: ql.XoaNhanVien(); break;
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