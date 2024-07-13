//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define MAXSIZE 100
//
//
//struct PhanSo
//{
//	int tu, mau;
//};
//
//void nhap_PhanSo(PhanSo a[], int &n)
//{
//	printf("Nhap so luong phan tu:");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("---Nhap phan so thu %d---\n", i);
//		printf("Nhap tu so:"); scanf("%d", &a[i].tu);
//		printf("Nhap mau so:"); scanf("%d", &a[i].mau);
//		while (a[i].mau==0)
//		{
//			printf("Mau so phai khac 0!!! Vui long nhap lai!!!\n");
//			printf("Nhap tu so:"); scanf("%d", &a[i].tu);
//			printf("Nhap mau so:"); scanf("%d", &a[i].mau);
//		}
//		if (a[i].mau<0)
//		{
//			a[i].mau = -a[i].mau;
//			a[i].tu = -a[i].tu;
//		}
//	}
//}
//
//void xuat_PhanSo(PhanSo a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i].tu==0)
//		{
//			printf("Phan so thu %d: 0\n", i);
//		}
//		else if (a[i].mau==1)
//		{
//			printf("Phan so thu %d: %d\n", i, a[i].tu);
//		}
//		else if (a[i].mau<0)
//		{
//			printf("Phan so thu %d: -%d/%d\n", i, a[i].tu, a[i].mau);
//		}
//		else printf("Phan so thu %d: %d/%d\n", i, a[i].tu, a[i].mau);
//	}
//}
//
//
//
//void timMAX(PhanSo a[], int n)
//{
//	float max = 0;
//	int t1, t2;
//	for (int i = 0; i < n; i++)
//	{
//		float h = float(a[i].tu) / float(a[i].mau);
//		if (h>=max)
//		{
//			max=h;
//			t1=a[i].tu;
//			t2=a[i].mau;
//		}
//	}
//	printf("Phan so lon nhat la: %d/%d", t1, t2);
//}
//
//void timMIN(PhanSo a[], int n)
//{
//	float min = float(a[0].tu) / float(a[0].mau);
//	int t1, t2;
//	for (int i = 0; i < n; i++)
//	{
//		float h = float(a[i].tu) / float(a[i].mau);
//		if (h<=min)
//		{
//			min=h;
//			t1=a[i].tu;
//			t2=a[i].mau;
//		}
//	}
//	printf("Phan so be nhat la: %d/%d", t1, t2);
//}
//
//void Xoa_PS(PhanSo a[], int &n, int vitri)
//{
//	if (vitri<0)
//	{
//		vitri=0;
//	}
//	else if (vitri>n-1)
//	{
//		vitri=n-1;
//	}
//	for (int i = vitri; i < n; i++)
//	{
//		a[i]=a[i+1];
//	}
//	n--;
//}
//
//void Them_PS(PhanSo a[], int &n, int tuso, int mauso, int vitri)
//{
//	if (vitri<0)
//	{
//		vitri=0;
//	}
//	else if (vitri>n-1)
//	{
//		vitri=n-1;
//	}
//	for (int i = n; i > vitri; i--)
//	{
//		a[i]=a[i-1];
//	}
//	a[vitri].tu=tuso;
//	a[vitri].mau=mauso;
//	n++;	
//}
//
//int main()
//{
//	PhanSo a[MAXSIZE];
//	int n;
//	nhap_PhanSo(a,n);
//	printf("\n----------------------------------------------\n");
//	xuat_PhanSo(a,n);
//	printf("\n----------------------------------------------\n");
//	timMAX(a,n);
//	printf("\n");
//	timMIN(a,n);
//	printf("\n----------------------------------------------\n");
//	int vitri;
//	printf("Nhap vi tri can xoa:");
//	scanf("%d", &vitri);
//	Xoa_PS(a,n,vitri);
//	xuat_PhanSo(a,n);
//	printf("\n----------------------------------------------\n");
//	int k;
//	int ts, ms;
//	printf("Nhap vi tri can them:"); scanf("%d", &k);
//	printf("Nhap tu so:"); scanf("%d", &ts);
//	printf("Nhap mau so:"); scanf("%d", &ms);
//	Them_PS(a,n,ts,ms,k);
//	xuat_PhanSo(a,n);
//	getch();
//	return 0;
//}