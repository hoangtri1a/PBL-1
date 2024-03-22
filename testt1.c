#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const int MAX_SIZE = 100;

struct Date
{
    int day;
    int month;
    int year;
};

struct Name
{
    char Ho[30];
    char Ten[10];
};

struct Class
{
    char Faculity[30];
    int NamHoc;
    char Lop[10];
};

struct SinhVien
{
    struct Name name;
    struct Date dateOfBirth;
    char sex[5];
    char address[30];
    struct Class Lop;
};
typedef struct SinhVien SV;

struct MaSV
{
    unsigned long ID;
    char email[30];
};
typedef struct MaSV MSSV;

SV list[MAX_SIZE];
MSSV mssv[MAX_SIZE];

void NhapSV(SV *sv)
{
    printf("Nhap Ho: ");
    gets(sv->name.Ho);
    printf("Nhap Ten: ");
    scanf("%s",&sv->name.Ten);
    printf("Nhap Ngay Sinh: ");
    scanf("%d %d %d",&sv->dateOfBirth.day,&sv->dateOfBirth.month,&sv->dateOfBirth.year);
    printf("Nhap Gioi Tinh");
    scanf("%s",&sv->sex);
    printf("Nhap dia chi");
    scanf("%s",&sv->address);
    printf("Nhap nganh hoc: ");
    scanf("%s",&sv->Lop.Faculity);
    printf("Nhap nam hoc");
    scanf("%d",&sv->Lop.NamHoc);
}

void NhapSVN(SV list[],int n)
{
    printf("Nhap so luong SV can them: ");
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {
        printf("\nNhap SV thu: %d: ",i+1);
        NhapSV(&list[i]);
    }
}

void MainMenu()
{
    int n;
    int key;
        printf("--------------QUAN LI DANH SACH SINH VIEN--------------\n\n");
        printf("1.Them sinh vien\n");
        printf("2.Sap xep danh sach\n");
        printf("3.Xoa sinh vien\n");
        printf("4.Tim sinh vien\n");
        printf("5.Cap ma sinh vien\n");
        printf("6.Cap email\n");
        printf("7.In danh sach sinh vien ra man hinh\n");
        printf("8.In danh sach sinh vien ra file");
        printf("0.Thoat");
    
        scanf("%d",&key);
        switch (key)
        {
            case '1':
                NhapSVN(list,n);
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            default:
                printf("\nKhong co chuc nang nay");
                printf("\nNhan phim bat ky de tiep tuc");
                break;
        }
}


int main()
{
    MainMenu;

    return 0;
}
