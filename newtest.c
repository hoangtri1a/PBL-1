#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100
#define max_class 30
#define max_Ho 30
#define max_Ten 10
#define max_Faculity 30
#define max_Lop 10
#define max_Date 12
#define max_sex 5
#define max_address 30
#define max_emailsv 30

struct Name
{
    char Ho[max_Ho];
    char Ten[max_Ten];
};

struct Class
{
    char Faculity[max_Faculity];
    int NamHoc;
    char Lop[max_Lop];
};

struct SinhVien
{
    struct Name name;
    char Date[max_Date];
    char sex[max_sex];
    char address[max_address];
    struct Class Lop;
};
typedef struct SinhVien SV;

struct MaSV
{
    unsigned long ID;
    char email[max_emailsv];
};
typedef struct MaSV MSSV;

void NhapSV(SV *sv);
void NhapSVN(SV list[],int n);
void SapXepDanhSachSV(SV list[],int n);
void XoaEnter(char x[]);
void CapMaSV(SV list[],int n);
void CapEmailSV(SV list[],int n);
void InDanhSachSV(SV list[],int n);
void TimKiemSV();
void XoaSV();
void MainMenu();

void XoaEnter(char x[])
{
	size_t len = strlen(x);
	if (x[len-1] =='\n')
		x[len-1] = '\0';	
}

void NhapSV(SV *Sv)
{
	SV sv;
    printf("\nNhap Ten: ");
    fgets(sv.name.Ten,sizeof(sv.name.Ten),stdin);
    getchar();
    printf("\nNhap Ho: ");
    fgets(sv.name.Ho,sizeof(sv.name.Ho),stdin);
    XoaEnter(sv.name.Ho);
    printf("\nNhap Ngay Sinh: ");
    fgets(sv.Date,sizeof(sv.Date),stdin);
    XoaEnter(sv.Date);
    printf("\nNhap Gioi Tinh");
    scanf("%s",&sv.sex);
    printf("\nNhap dia chi");
    scanf("%s",&sv.address);
    printf("\nNhap nganh hoc: ");
    scanf("%s",&sv.Lop.Faculity);
    printf("\nNhap nam hoc");
    scanf("%d",&sv.Lop.NamHoc);
    *Sv=sv;
}

void NhapSVN(SV list[],int n)
{
    n=0;
    do
    {
        printf("Nhap so luong SV can them: ");
        scanf("%d",&n);
        if (n<=0) 
        {
            printf("Vui long nhap lai n>0\n");
        }
    } while(n<=0);
    for (int i = 0; i<n; i++)
    {
        printf("\nNhap SV thu %d: ",i+1);
        NhapSV(&list[i]);
    }
}

void MainMenu(SV list[])
{
    bool nhap=false;
    int key,n;
    do
    	{
        printf("--------------QUAN LI DANH SACH SINH VIEN--------------\n\n");
        printf("1.Them sinh vien\n");
        printf("2.Sap xep danh sach\n");
        printf("3.Xoa sinh vien\n");
        printf("4.Tim sinh vien\n");
        printf("5.Cap ma sinh vien\n");
        printf("6.Cap email\n");
        printf("7.In danh sach sinh vien ra man hinh\n");
        printf("8.In danh sach sinh vien ra file\n");
        printf("0.Thoat\n");
    	printf("Nhap yeu cau cua ban: ");
        scanf("%d",&key);
        getchar();
        switch (key)
        {
            case 1:
                NhapSVN(list,n);
                nhap=true;
                break;
            case 2:
                nhap = true;
                break;
            case 3:
                nhap = true;
                break;
            case 4:
                nhap = true;
                break;
            case 5:
                nhap = true;
                break;
            case 0:
                nhap = false;
                printf("Ban da thoat khoi chuong trinh!");
                break;
            default:
                printf("\nKhong co chuc nang nay");
                printf("\nNhan phim bat ky de tiep tuc");
                nhap = true;
        }
    }
    while(nhap);
}

int main()
{
    SV list[MAX_SIZE];
    MainMenu(list);

    return 0;
}

