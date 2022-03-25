#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,lc,sl,gia;
	num=0;
	char dc;
	do {
		printf("Anh Em Luong Son Bac xin chao ban:\n");
		printf("Thuc Don gom co:");
		printf("\n1.Cafe Hao Han");
		printf("\n2.Nuoc loc lay tu suoi");
		printf("\n3.Huong duong anh hung");
		printf("\n4.Thuoc Lao ae 1 nha");
		printf("\nvui long lua chon nhanh len:");
		scanf("%d",&lc);
		switch(lc){
		
		case 1:
			gia = 25000;
			printf("\nCafe Hao Han co gia la %d", gia);
			printf("\nNhap so luong:");
			scanf("%d", &sl);
			printf("Ban da chon %d Cafe Hao Han", sl);
			num+=sl*gia;
			break;
		case 2:
			gia = 8000;
			printf("\nNuoc loc lay tu suoi co gia la %d", gia);
			printf("\nNhap so luong:");
			scanf("%d", &sl);
			printf("Ban da chon %d Nuoc loc lay tu suoi", sl);
			num+=sl*gia;
			break;
		case 3:
			gia = 20000;
			printf("\nHuong duong anh hung co gia la %d", gia);
			printf("\nNhap so luong:");
			scanf("%d", &sl);
			printf("Ban da chon %d Huong duong anh hung", sl);
			num+=sl*gia;
			break;
		case 4:
			gia = 5000;
			printf("\nThuoc Lao ae 1 nha co gia la %d", gia);
			printf("\nNhap so luong:");
			scanf("%d", &sl);
			printf("Ban da chon %d Thuoc Lao ae 1 nha", sl);
			num+=sl*gia;
			break;
		}
		printf("\nBan co muon tiep tuc chon? (Y?N):");
		     fflush(stdin);
		     scanf("%c", &dc);
		 }while(dc=='y'||dc=='Y');
		 printf("\nCai gia ban phai tra la: %d", num);
							return 0;
}
