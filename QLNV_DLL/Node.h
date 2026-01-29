#pragma once
#include "NhanVien.h" // Node cần biết NhanVien là gì

struct Node {
    NhanVien data;
    Node* next;
    Node* prev;

    Node(NhanVien nv) {
        data = nv;
        next = NULL;
        prev = NULL;
    }
};
