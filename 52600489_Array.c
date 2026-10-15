#include <stdio.h>
#include <math.h>
#define MAX 100
void nhapMang(int a[], int *n) {
    int i;
    do {
        printf("Nhap n (1-100): ");
        scanf("%d", n);
    } while (*n < 1 || *n > MAX);
    for (i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void cau5(int a[], int n) {
    int i, found = 0, k;
    for (i = 0; i < n; i++) {
        if (a[i] >= 0) {
            k = (int)sqrt(a[i]);
            if (k * k == a[i]) {
                found = 1;
                break;
            }
        }
    }
    if (found==1)
        printf("5. Mang ton tai so chinh phuong\n");
    else
        printf("5. Mang khong ton tai so chinh phuong\n");
}

void cau14(int a[], int n) {
    int i, j, b[MAX], t;
    for (i = 0; i < n; i++)
        b[i] = a[i];
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (b[i] < b[j]) {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
    printf("14. ");
    xuatMang(b, n);
    printf("\n");
}

void cau15(int a[], int n) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("15. Vi tri = %d\n", i);
            found = 1;
            break;
        }
    }
    if (found==0)
        printf("15. Khong co so le\n");
}

void cau16(int a[], int n, int x) {
    int i, found = 0;
    printf("16. ");
    for (i = 0; i < n; i++) {
        if (a[i] > x) {
            printf("%d ", a[i]);
            found = 1;
        }
    }
    if (!found)
        printf("Khong co");
    printf("\n");
}

void cau17(int a[], int *n, int x) {
    int i, j = 0;
    for (i = 0; i < *n; i++)
        if (a[i] <= x)
            a[j++] = a[i];
    *n = j;
    printf("17. ");
    xuatMang(a, *n);
    printf("\n");
}

void cau20(int a[], int *n, int y) {
    int i, j;
    if (*n >= MAX) {
        printf("20. Mang day, khong the them\n");
        return;
    }
    for (i = 0; i < *n; i++) {
        if (a[i] % 2 == 0) {
            for (j = *n; j > i + 1; j--)
                a[j] = a[j - 1];
            a[i + 1] = y;
            (*n)++;
            printf("20. ");
            xuatMang(a, *n);
            printf("\n");
            return;
        }
    }
    printf("20. Khong co so chan\n");
}

void cau21(int a[], int *n) {
    int i;
    if (*n > 0) {
        for (i = 0; i < *n - 1; i++)
            a[i] = a[i + 1];
        (*n)--;
    }
    printf("21. ");
    xuatMang(a, *n);
    printf("\n");
}

void cau23(int a[], int n) {
    int i, b[MAX];
    for (i = 0; i < n; i++)
        if(a[i] < 0)
        	b[i] = 0;
        else
        	b[i] = a[i];	
    printf("23. ");
    xuatMang(b, n);
    printf("\n");
}

void cau24(int a[], int n) {
    int i, b[MAX], c[MAX], nc = 0, nl = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            b[nc++] = a[i];
        else
            c[nl++] = a[i];
    }
	printf("24. Mang chan: ");
    xuatMang(b, nc);
    printf("\tMang le: ");
    xuatMang(c, nl);
    printf("\n");
}

void cau25(int a[], int n) {
    int i, j, b[MAX], c[MAX], nc = 0, nl = 0;
    int t, k = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            b[nc++] = a[i];
        else
            c[nl++] = a[i];
    }
    for (i = 0; i < nc - 1; i++)
        for (j = i + 1; j < nc; j++)
            if (b[i] > b[j]) {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
    for (i = 0; i < nl - 1; i++)
        for (j = i + 1; j < nl; j++)
            if (c[i] < c[j]) {
                t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
    for (i = 0; i < nc; i++)
        a[k++] = b[i];
    for (i = 0; i < nl; i++)
        a[k++] = c[i];
    printf("25. ");
    xuatMang(a, n);
    printf("\n");
}
int main() {
    int a[MAX], n, x, y;
    nhapMang(a, &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y); 
    cau5(a, n);
    cau14(a, n);
    cau15(a, n);
    cau16(a, n, x);
    cau17(a, &n, x);
    cau20(a, &n, y);
    cau21(a, &n);
    cau23(a, n);
    cau24(a, n);
    cau25(a, n);
    return 0;
}
