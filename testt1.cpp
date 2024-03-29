#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const int MAX_SIZE = 100;


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
    char Date[11];
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

void XoaEnter(char[x]);
void namefile();
void readfile();
void writefile();
void NhapSV(SV *Sv);
void NhapSVN(SV list[],int n);
void SapXepSV(SV list[],int n);
void CapMSSV();
void CapEmail();
void TimSVtheoID();
void TimSVtheoTen();
void XoaSV();
void XuatSV(list [],int n);


void XoaEnter(char x[])
{
	size_t len = strlen(x);
	if (x[len-1]=='\n')
		x[len-1] = '\0';	
}

void namefile()
{
}

void readfile()
{

}

void writefile()
{
}

void NhapSV(SV *Sv)
{
	SV sv;
    printf("\nNhap Ten: ");
    fgets(sv.name.Ten,sizeof(sv.name.Ten),stdin);
    getchar();
    printf("\nNhap Ho: ");
    fgets(sv.name.Ho,sizeof(sv.name.Ho),stdin);
    getchar();
    printf("\nNhap Ngay Sinh: ");
    fgets(sv.Date,sizeof(sv.Date),stdin);
    getchar();
    printf("\nNhap Gioi Tinh");
    fscanf(file,"%s",&sv.sex);
    printf("\nNhap dia chi");
    fscanf(file,"%s",&sv.address);
    printf("\nNhap nganh hoc: ");
    fscanf(file,"%s",&sv.Lop.Faculity);
    printf("\nNhap nam hoc");
    fscanf(file,"%d",&sv.Lop.NamHoc);
    *Sv=sv;
}

void NhapSVN(SV list[],int n)
{
    printf("Nhap so luong SV can them: ");
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {
        printf("\nNhap SV thu %d: ",i+1);
        NhapSV(&list[i]);
    }
}

void MainMenu()
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
    	printf("Nhap yeu cau cua ban\n");
        scanf("%d",&key);
        getchar();
        switch (key)
        {
            case 1:
                NhapSVN(list,n);
                nhap=true;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 0:
            default:
                printf("\nKhong co chuc nang nay");
                printf("\nNhan phim bat ky de tiep tuc");
        }
    }
    while(nhap);
}


int main()
{
    MainMenu();

    return 0;
}
