#include "QuanLyNhanVien.h"
#include <iomanip>

QuanLyNhanVien::QuanLyNhanVien() { head = tail = NULL; }

// Destructor: Giải phóng bộ nhớ khi tắt chương trình
QuanLyNhanVien::~QuanLyNhanVien() {
    Node* current = head;
    while (current != NULL) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void QuanLyNhanVien::ThemNodeVaoDanhSach(NhanVien nv) {
    Node* newNode = new Node(nv);
    if (head == NULL) head = tail = newNode;
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void QuanLyNhanVien::ThemSanNhanVien(string ma, string ten, string phong, double luong) 
{
    NhanVien nv(ma, ten, phong, luong);
    ThemNodeVaoDanhSach(nv);
}

void QuanLyNhanVien::ThemNhanVien() 
{
    NhanVien nv;
    cout << "\n--- THEM NHAN VIEN MOI ---\n";
    nv.Nhap();
    ThemNodeVaoDanhSach(nv);
    cout << "-> Them thanh cong!\n";
}

void QuanLyNhanVien::HienThiTatCa()
{
    if (!head) {
        cout << "\nDanh sach trong!\n";
        return;
    }

    cout << "\nDANH SACH NHAN VIEN\n";
    cout << string(70, '-') << endl;

    cout << left
        << setw(10) << "MaNV"
        << setw(25) << "Ho Ten"
        << setw(15) << "Phong Ban"
        << setw(15) << "Luong (VND)" << endl;

    cout << string(70, '-') << endl;

    Node* curr = head;
    while (curr) {
        curr->data.Xuat();   // ✅ giữ nguyên như cũ
        curr = curr->next;
    }

    cout << string(70, '-') << endl;
}


void QuanLyNhanVien::TimKiemTheoMa() 
{
    string ma; cout << "\nNhap Ma can tim: "; cin >> ma;
    Node* curr = head;
    while (curr) 
    {
        if (curr->data.getMaNV() == ma) {
            cout << "Tim thay:\n"; curr->data.Xuat(); return;
        }
        curr = curr->next;
    }
    cout << "Khong tim thay!\n";
}

void QuanLyNhanVien::TinhTongLuong() 
{
    double tong = 0;
    for (Node* p = head; p; p = p->next) tong += p->data.getLuong();
    cout << "\nTong luong: " << fixed << setprecision(0) << tong << " VND\n";
}

void QuanLyNhanVien::LocTheoLuong() 
{
    double m; cout << "Nhap muc luong toi thieu: "; cin >> m;
    cout << "\nKet qua loc:\n";
    for (Node* p = head; p; p = p->next)
        if (p->data.getLuong() >= m) p->data.Xuat();
}

// Logic XÓA đầy đủ các trường hợp (Head, Tail, Mid)
void QuanLyNhanVien::XoaNhanVien() {
    string ma; cout << "\nNhap Ma can xoa: "; cin >> ma;
    Node* curr = head;
    while (curr) {
        if (curr->data.getMaNV() == ma) {
            if (curr == head) {
                head = head->next;
                if (head) head->prev = NULL; else tail = NULL;
            }
            else if (curr == tail) {
                tail = tail->prev;
                tail->next = NULL;
            }
            else {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }
            delete curr;
            cout << "-> Da xoa thanh cong!\n";
            return;
        }
        curr = curr->next;
    }
    cout << "Khong tim thay ma nay!\n";
}