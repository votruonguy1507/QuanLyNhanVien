#pragma once
#include <string>
#include <vector>

using namespace std;

bool isEmpty(const string& s);
string trim(const string& s);

bool isValidMaNV(const string& ma);        // VD: NV001
bool isValidName(const string& name);      // chỉ chữ + space

bool isDuplicateMaNV(const vector<string>& dsMa, const string& ma);

int inputIntSafe(int min, int max);
double inputDoubleSafe(double min);

string inputMaNV(const vector<string>& dsMa);
string inputHoTen();
string inputPhongBan();
double inputLuong();
