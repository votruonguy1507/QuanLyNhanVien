#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <limits> // Thư viện xử lý giới hạn nhập liệu

using namespace std;

class Utils {
public:
    // 1. Hàm xóa màn hình (thay vì gọi system("cls") lung tung)
    static void XoaManHinh() {
        system("cls");
    }

    // 2. Hàm dừng màn hình (thay vì gọi system("pause"))
    static void DungManHinh() {
        cout << "\nNhan Enter de tiep tuc...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }

    // 3. Hàm kẻ đường gạch ngang cho đẹp
    static void KeDuongKe(int doDai) {
        cout << string(doDai, '-') << endl;
    }

    // 4. Hàm nhập số nguyên dương (Validate cực xịn)
    // Dùng cho việc nhập Lương, nhập Menu
    static double NhapSoDuong(string thongBao) {
        double n;
        while (true) {
            cout << thongBao;
            if (cin >> n) {
                if (n >= 0) {
                    return n; // Nhập đúng thì trả về giá trị
                }
                else {
                    cout << "Loi: Vui long nhap so duong!\n";
                }
            }
            else {
                cout << "Loi: Ban nhap sai dinh dang (nhap chu)! Vui long nhap lai.\n";
                cin.clear(); // Xóa cờ lỗi
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Xóa bộ nhớ đệm
            }
        }
    }

    // 5. Hàm chuẩn hóa chuỗi (Xóa khoảng trắng thừa - Nâng cao)
    // VD: "  nguyen   VAN   a  " -> "Nguyen Van A"
    // (Nếu bạn thấy khó quá có thể bỏ qua hàm này)
    static string ChuanHoaTen(string ten) {
        string res = "";
        string tu;
        // Logic tách từ và viết hoa chữ cái đầu...
        // (Để đơn giản, tạm thời bạn cứ return ten; nếu chưa cần chức năng này)
        return ten;
    }

    // 6. Hàm định dạng tiền VND
    static string FormatVND(long long soTien) {
        string s = to_string(soTien);
        int pos = s.length() - 3;

        while (pos > 0) {
            s.insert(pos, ".");
            pos -= 3;
        }
        return s;
    }
};
