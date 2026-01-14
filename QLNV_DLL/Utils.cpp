#include "Utils.h"
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

string trim(const string& s) {
    size_t start = s.find_first_not_of(" ");
    size_t end = s.find_last_not_of(" ");
    if (start == string::npos) return "";
    return s.substr(start, end - start + 1);
}

bool isEmpty(const string& s) {
    return trim(s).empty();
}

bool isValidMaNV(const string& ma) {
    if (ma.length() < 3) return false;
    if (ma[0] != 'N' || ma[1] != 'V') return false;
    for (size_t i = 2; i < ma.length(); i++) {
        if (!isdigit(ma[i])) return false;
    }
    return true;
}

bool isValidName(const string& name) {
    for (char c : name) {
        if (!isalpha(c) && c != ' ')
            return false;
    }
    return true;
}

bool isDuplicateMaNV(const vector<string>& dsMa, const string& ma) {
    return find(dsMa.begin(), dsMa.end(), ma) != dsMa.end();
}

int inputIntSafe(int min, int max) {
    int x;
    while (true) {
        cin >> x;
        if (cin.fail() || x < min || x > max) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Nhap khong hop le, nhap lai: ";
        }
        else {
            cin.ignore(1000, '\n');
            return x;
        }
    }
}

double inputDoubleSafe(double min) {
    double x;
    while (true) {
        cin >> x;
        if (cin.fail() || x < min) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Gia tri khong hop le, nhap lai: ";
        }
        else {
            cin.ignore(1000, '\n');
            return x;
        }
    }
}

string inputMaNV(const vector<string>& dsMa) {
    string ma;
    while (true) {
        cout << "Ma NV (VD: NV001): ";
        getline(cin, ma);
        ma = trim(ma);

        if (isEmpty(ma)) {
            cout << "Ma NV khong duoc rong!\n";
        }
        else if (!isValidMaNV(ma)) {
            cout << "Sai dinh dang ma NV!\n";
        }
        else if (isDuplicateMaNV(dsMa, ma)) {
            cout << "Ma NV da ton tai!\n";
        }
        else {
            return ma;
        }
    }
}

string inputHoTen() {
    string ten;
    while (true) {
        cout << "Ho ten: ";
        getline(cin, ten);
        ten = trim(ten);

        if (isEmpty(ten)) {
            cout << "Ho ten khong duoc rong!\n";
        }
        else if (!isValidName(ten)) {
            cout << "Ho ten chi duoc chua chu cai!\n";
        }
        else {
            return ten;
        }
    }
}

string inputPhongBan() {
    int choice;
    cout << "Chon phong ban:\n";
    cout << "1. Hanh chinh\n";
    cout << "2. Ke toan\n";
    cout << "3. Ky thuat\n";
    cout << "4. Nhan su\n";
    cout << "Lua chon: ";

    choice = inputIntSafe(1, 4);

    switch (choice) {
    case 1: return "Hanh chinh";
    case 2: return "Ke toan";
    case 3: return "Ky thuat";
    case 4: return "Nhan su";
    default: return "";
    }
}

double inputLuong() {
    cout << "Luong co ban (>0): ";
    return inputDoubleSafe(1);
}