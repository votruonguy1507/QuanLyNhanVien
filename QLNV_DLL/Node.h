#pragma once
#include "NhanVien.h"

struct Node {
    NhanVien data;
    Node* prev;
    Node* next;

    Node(NhanVien nv) : data(nv), prev(nullptr), next(nullptr) {}
};

