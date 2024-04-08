#include <iostream>
#include <string>
using namespace std;
//Bai1
void my_swap(int* px, int* py) {
	int c;
	c = *px; 
	*px = *py; 
	*py = c;
}
//Bai2
template<typename T, size_t N>
void f(T (&arr)[N]) {
    cout << "Kích thước của mảng trong hàm f: " << N << std::endl;
}
//Bai3
int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
//Bai4
int NhiPhan(int *arr, int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (target < arr[mid])
            return NhiPhan(arr, left, mid - 1, target);
        return NhiPhan(arr, mid + 1, right, target);
    }
    return -1;
}
//Bai5
char* weird_string(char* c) { 
 //  char c[] = "123345";
   return c; 
}

// Vấn đề ở đây là khi hàm weird_string kết thúc,
// vùng nhớ được sử dụng để lưu trữ mảng c sẽ bị giải phóng do nó được định nghĩa trong phạm vi của hàm.
// Khi hàm kết thúc, bộ nhớ sẽ không còn giữ lại dữ liệu của mảng c nữa,
// do đó con trỏ trả về sẽ trỏ tới một vùng nhớ không xác định và không hợp lệ.
// Điều này có thể dẫn đến hành vi không xác định khi bạn sử dụng con trỏ này trong chương trình.

//Bai 6
// OUTPUT: Number of command-line arguments: 1
//          Argument #0: _f:\SDLwithNDD\contro_


//Bai 7
int countSubstring(const char* str1, const char* str2) {
    int count = 0;
    int len1 = std::strlen(str1);
    int len2 = std::strlen(str2);

    // Duyệt qua từng kí tự của xâu str2
    for (int i = 0; i <= len2 - len1; ++i) {
        // So sánh xâu con của str2 bắt đầu từ vị trí i có độ dài len1 với str1
        if (std::strncmp(str1, str2 + i, len1) == 0) {
            count++;
        }
    }
    return count;
}


//int main() {
//	int a = 20;
//	int b = 25;

//	my_swap(&a, &b);	
//	cout << a << "," << b;
//  int A[] = {1, 2, 3, 4, 5};
//     cout << "Kích thước của mảng từ bên ngoài: " << sizeof(A) / sizeof(A[0]) << std::endl;
//     f(A);

      // int SIZE = 10;
      // int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      // int count_front = count_even(arr, 5);
      // cout << "Số số chẵn trong đoạn 5 phần tử đầu: " << count_front << std::endl;
      // int count_back = count_even(arr + SIZE - 5, 5);
      // cout << "Số số chẵn trong đoạn 5 phần tử cuối: " << count_back << std::endl;

//     const int SIZE = 10;
//     int arr[SIZE] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

//     int target = 15;

//     int index = NhiPhan(arr, 0, SIZE - 1, target);

//     if (index != -1)
//       cout << "Phần tử " << target << " được tìm thấy tại vị trí " << index << std::endl;
//     else
//       cout << "Không tìm thấy phần tử " << target << " trong mảng." << std::endl;

//     return 0;
// int main(int argc, const char * argv[]) {
// 	cout << "Number of command-line arguments: " << argc << endl;
// 	for (int i = 0; i < argc; i++) {
// 		cout << "Argument #" << i << ": _" << argv[i] << "_\n";
// 	}
// 	return 0;
//       }

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Sử dụng: " << argv[0] << " <xâu thứ nhất> <xâu thứ hai>" << std::endl;
        return 1;
    }
    const char* str1 = argv[3];
    const char* str2 = argv[4];
    int occurrences = countSubstring(str1, str2);
    cout << "Số lần xuất hiện của \"" << str1 
         << "\" trong \"" << str2 << "\": " 
         << occurrences << std::endl;
    return 0;
}