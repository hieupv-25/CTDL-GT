#include <bits/stdc++.h>
using namespace std;

#define MAX = 100
struct HocVien{
    char maHV[10];
    char tenHV[20];
    char gioiTinh[10];
    float diem;
};

struct List
{
    int count;
    HocVien a[MAX];
};

void Creat(List &L){
    L.count = -1;
}

int Full(List &L){
    return L.count == MAX - 1;
}

int Empty(List L){
    return L.count == -1;
}

int add(List &L, HocVien x){
    if(Full(L)) return 0;
    else{
        L.count ++;
        L.a[L.count] = x;
        return 1;
    }
}

void nhap(HocVien &hv){
    cout << "Nhap ma hoc vien: ";
    fflush(stdin);
    gets(hv.maHV);
    cout << "Nhap ten hoc vien: ";
    fflush(stdin);
    gets(hv.tenHV);
    cout << "Nhap gioi tinh hoc vien: ";
    fflush(stdin);
    gets(hv.gioiTinh);
    cout << "Nhap diem hoc vien: ";
    cin >> hv.diem;
}

void xuat(List &L){
    cout << setw(5) << left << "STT";
    cout << setw(12) << left << "Ma HV";
    cout << setw(12) << left << "Ten HV";
    cout << setw(12) << left << "Gioi Tinh";
    cout << setw(12) << right << "Diem TB" << endl;
    for(int i = 0;i < L.count;i++){
        cout << setw(5) << left << i+1;
        cout << setw(12) << left << L.a[i].maHV;
        cout << setw(12) << left << L.a[i].tenHV;
        cout << setw(12) << left << L.a[i].gioiTinh;
        cout << setw(12) << right << fixed << setprecision(2) << L.a[i].diem << endl;
    }
}

void xoavtk(List &L, int k){
    if(k > 0 && k <= L.count + 1){
        for(int i = k; i <= L.count;i++){

        }
    }
}

void xoa(List &L){
    if(Empty(1)){
        cout << "Danh sach trong khong the xoa.";
        return;
    }
    int k;
    cout << "Nhap vi tri can xoa";
    cin >> k;
    for(int i = k;i < L.count;i++){
        L.a[i - 1] = L.a[i];
    }
    L.count --;
}

void chen(List &l){
    if(Full(1)){
        cout << "Danh sach day khong the chen!";
        return;
    }
    int k;
    sach x;
}

int main(){
    return 0;
}