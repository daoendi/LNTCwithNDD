#include <iostream>
#include <cstring>
using namespace std;
//bai 1
char* concat(const char* s1, const char* s2)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    char* temp = new char [n1 + n2 +1];
    strcpy(temp,s1);
    strcat(temp,s2);
    return temp;
}
// bai 2
/*
p2 là con trỏ trỏ tới địa chỉ của p, p được cấp phát bộ nhớ động và bị xoá đi 
=> p2 trở thành con trỏ NULL vì ko trỏ tới địa chỉ nào
khi gán giá trị p2 = 100 cũng như gán 100 vào hư không và biến p2 cx ko nhận đc giá trị nào
*/

int main()
{
/*    const char* s1 = "Hi";
    const char* s2 = " there";
    char* s3 = concat(s1,s2);
    cout << s3;
*/
/*  int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;
*p2 = 100;
 cout << *p2;
 delete p2;
 */
//bai 3
/*    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; //chương trình đang chỉ xoá 1 phần của bộ nhớ động a cụ thể là a[2] do đó khi duyệt a sẽ gây lỗi runtime
    cerr << "a after deleting c:" << "-" << a << "-" << endl; */

// bai 4
    int x = 5;
    int *ptr = &x;
    delete ptr;
  //  vì biến x không được cấp phát bằng toán tử new, việc sử dụng delete trên con trỏ ptr
  //không hợp lệ và dẫn đến lỗi không xác định.
}
