#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void nhapM1C_SoNguyen (int * &a, int &n)
{
	printf("Nhap so phan tu cua mang:");
	scanf("%d", &n);
	a = (int *)malloc(n*sizeof(int));
	for(int i = 0; i < n; i++)
		a[i]= rand()%10;
}

void xuatM1C_SoNguyen(int *a, int n)
{
	for(int i = 0; i < n; i++)
	{
	printf("\nPhan tu thu %d co gia tri %d va dia chi o nho la %x", i, a[i], a+i);
	}
}

void XuLy_HaiMang(int *a, int *b, int n1, int n2)
{
	if (n1!=n2)
	{
		printf("Hai Mang Khong Cung Kich Thuonc!!! Khong The Thuc Hien Phep Chia!!!\n");
	}
	else
	{
		for (int i = 0; i < n1; i++)
		{
			if (b[i]==0)
			{
				printf("Khong the thuc hien phep chia vi phan tu b[%d]=0\n", i);
			}
			else
			{
				float kq = (float)a[i] / b[i];
				printf("Ket qua cua a[%d] / b[%d] = %.2f\n", i, i, kq);
			}
		}
	}
}

void main()
{
	int *a, *b, n1, n2;
	printf("NHAP MANG A:\n");
	nhapM1C_SoNguyen(a, n1);
	xuatM1C_SoNguyen(a, n1);
	printf("\n-------------------------------------------\n");
	printf("\n-------------------------------------------\n");
	printf("NHAP MANG B:\n");
	nhapM1C_SoNguyen(b, n2);
	xuatM1C_SoNguyen(b, n2);
	printf("\n-------------------------------------------\n");
	XuLy_HaiMang(a,b,n1,n2);
	getch();
}
