# 📌 QUẢN LÝ NHÂN VIÊN – C++ (VISUAL STUDIO)

## 1. Giới thiệu
Đây là chương trình **Quản lý thông tin nhân viên** được xây dựng bằng **ngôn ngữ C++**, phục vụ cho học phần **Lập trình / Cấu trúc dữ liệu**.

Chương trình được cài đặt theo **hai cách khác nhau** nhằm so sánh và đáp ứng đầy đủ yêu cầu đề bài:
- **Phiên bản 1:** Danh sách liên kết đôi (Double Linked List)
- **Phiên bản 2:** Vector (`std::vector`)

---

## 2. Mục tiêu chương trình
- Quản lý danh sách nhân viên
- Áp dụng lập trình hướng đối tượng (OOP)
- Rèn luyện tư duy cấu trúc dữ liệu
- So sánh hai phương pháp cài đặt khác nhau

---

## 3. Thông tin nhân viên
Mỗi nhân viên bao gồm các thuộc tính:
- Mã nhân viên
- Họ tên nhân viên
- Phòng ban
- Lương cơ bản

---

## 4. Các chức năng chính
Chương trình cung cấp các chức năng sau:
1. Thêm nhân viên mới
2. Hiển thị danh sách nhân viên
3. Tìm kiếm nhân viên theo mã
4. Tính và hiển thị tổng quỹ lương
5. Hiển thị các nhân viên có lương ≥ mức lương nhập từ bàn phím
6. Menu cho phép quay lại hoặc thoát chương trình

---

## 5. Công nghệ sử dụng
- Ngôn ngữ: **C++**
- IDE: **Visual Studio**
- Thư viện chuẩn C++ (`iostream`, `vector`, `string`, `iomanip`)
- Không sử dụng thư viện ngoài

---

## 6. Cấu trúc Solution (Visual Studio)
QLNV.sln
│
├── QLNV_DLL (Phiên bản chính – Double Linked List)
│ ├── Header Files
│ │ ├── NhanVien.h
│ │ ├── Node.h
│ │ ├── QuanLyNhanVien.h
│ │ └── Utils.h
│ │
│ ├── Source Files
│ │ ├── NhanVien.cpp
│ │ ├── QuanLyNhanVien.cpp
│ │ └── main.cpp
│
└── QLNV_Vector (Phiên bản phụ – Vector)
├── Header Files
│ └── NhanVien.h
└── Source Files
└── main.cpp


---

## 7. Mô tả hai phiên bản

### 🔹 Phiên bản 1: Double Linked List
- Sử dụng `Node` với con trỏ `prev` và `next`
- Quản lý bộ nhớ thủ công
- Phù hợp để học và áp dụng **Cấu trúc dữ liệu**

### 🔹 Phiên bản 2: Vector
- Sử dụng `std::vector<NhanVien>`
- Quản lý bộ nhớ tự động
- Code đơn giản, dễ đọc, dễ bảo trì

---

## 8. So sánh hai phương pháp

| Tiêu chí | Double Linked List | Vector |
|--------|-------------------|--------|
| Quản lý bộ nhớ | Thủ công | Tự động |
| Thêm/xóa giữa | Nhanh | Chậm hơn |
| Độ phức tạp | Cao | Thấp |
| Phù hợp | Học CTDL | Ứng dụng nhỏ |

---

## 9. Hướng dẫn chạy chương trình
1. Mở file `QLNV.sln` bằng **Visual Studio**
2. Chọn project muốn chạy (`QLNV_DLL` hoặc `QLNV_Vector`)
3. Chuột phải → **Set as Startup Project**
4. Nhấn **Ctrl + F5** để chạy chương trình

---

## 10. Phân công nhóm (4 người)

| Thành viên | Nhiệm vụ chính | Tỷ lệ |
|----------|---------------|-------|
| TV1 | Core logic, DLL | 35% |
| TV2 | Validation, kiểm soát nhập | 30% |
| TV3 | Menu, giao diện console | 20% |
| TV4 | Phiên bản vector, báo cáo | 15% |
| **Tổng** |  | **100%** |

---

## 11. Hướng phát triển
- Bổ sung lưu / đọc dữ liệu từ file
- Chuẩn hóa validation đầu vào
- Tách lớp Menu riêng
- Phát triển giao diện GUI

---

## 12. Kết luận
Chương trình đáp ứng đầy đủ yêu cầu đề bài, áp dụng đúng kiến thức lập trình hướng đối tượng và cấu trúc dữ liệu, đồng thời giúp so sánh ưu nhược điểm của hai phương pháp cài đặt khác nhau trong C++.

---

📌 *Dự án được xây dựng cho mục đích học tập.*

