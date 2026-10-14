#include <stdio.h>
int i;
void cau1(int n) {
    printf("1. Cac uoc so: ");
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d ", i);
}


void cau2(int n) {
    int tong = 0;
    for (i = 2; i < n; i += 2)
        tong += i;
    printf("\n2. Tong cac so chan nho hon n = %d\n", tong);
}


void cau3(int n) {
    int tong = 0, dem = 0;
    for (i = 1; i < n; i += 2) {
        tong += i;
        dem++;
    }
    if (dem > 0)
        printf("3. TBC cac so le nho hon n = %.2f\n",
               (float)tong / dem);
    else
        printf("3. Khong co so le nho hon n\n");
}


void cau4(int n) {
    int dem = 0;
    for (i = 1; i < n; i++)
        if (i % 3 == 0 && i % 5 == 0)
            dem++;
    printf("4. So luong boi cua 3 va 5 = %d\n", dem);
}


void cau5(int n) {
    int nt = (n >= 2);
    for (i = 2; i <= n / i && nt; i++)
        if (n % i == 0)
            nt = 0;

    if (nt)
        printf("5. n la so nguyen to\n");
    else
        printf("5. n khong la so nguyen to\n");
}


void cau6(int n) {
    int cp = 0;
    for (i = 0; n >= 0 && (long long)i * i <= n; i++) {
        if ((long long)i * i == n) {
            cp = 1;
            break;
        }
    }

    if (cp)
        printf("6. n la so chinh phuong\n");
    else
        printf("6. n khong la so chinh phuong\n");
}


void cau7(int n) {
    int tong = 0;
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            tong += i;

    if (n > 1 && tong == n)
        printf("7. n la so hoan thien\n");
    else
        printf("7. n khong la so hoan thien\n");
}


void cau8(int n) {
    int dem = 0;
    if (n < 0) n = -n;

    while (n > 0) {
        if ((n % 10) % 2 != 0)
            dem++;
        n /= 10;
    }
    printf("8. So chu so le = %d\n", dem);
}


void cau9(int n) {
    int a[20], dem = 0;
    if (n < 0) n = -n;

    do {
        a[dem++] = n % 10;
        n /= 10;
    } while (n > 0);

    printf("9. Cac chu so chan: ");
    int co = 0;
    for (i = dem - 1; i >= 0; i--) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            co = 1;
        }
    }
    if (!co) printf("Khong co\n");
}


void cau10(int n) {
    int chan = 1;
    if (n < 0) n = -n;

    do {
        if ((n % 10) % 2 != 0)
            chan = 0;
        n /= 10;
    } while (n > 0);

    if (chan)
        printf("10. n co toan chu so chan\n");
    else
        printf("10. n khong co toan chu so chan\n");
}


void cau11(int n) {
    int a[20], dem = 0;
    if (n < 0) n = -n;

    do {
        a[dem++] = n % 10;
n /= 10;
    } while (n > 0);

    int tang = 1;
    for (i = dem - 1; i > 0; i--)
        if (a[i] >= a[i - 1])
            tang = 0;

    if (tang)
        printf("11. Cac chu so tang dan\n");
    else
        printf("11. Cac chu so khong tang dan\n");
}


void cau12(int n) {
    int tong = 0;
    if (n < 0) n = -n;

    while (n > 0) {
        int x = n % 10;
        if (x % 2 == 0)
            tong += x;
        n /= 10;
    }
    printf("12. Tong cac chu so chan = %d\n", tong);
}


void cau13(int n) {
    int max = 0;
    if (n < 0) n = -n;

    do {
        int x = n % 10;
        if (x > max)
            max = x;
        n /= 10;
    } while (n > 0);

    printf("13. Chu so lon nhat = %d\n", max);
}


void cau14(int n) {
    int goc = n, dao = 0;

    if (n < 0) {
        printf("14. n khong phai so doi xung\n");
        return;
    }

    while (n > 0) {
        dao = dao * 10 + n % 10;
        n /= 10;
    }

    if (goc == dao)
        printf("14. n la so doi xung\n");
    else
        printf("14. n khong phai so doi xung\n");
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    cau1(n);
    cau2(n);
    cau3(n);
    cau4(n);
    cau5(n);
    cau6(n);
    cau7(n);
    cau8(n);
    cau9(n);
    cau10(n);
    cau11(n);
    cau12(n);
    cau13(n);
    cau14(n);

    return 0;
}
