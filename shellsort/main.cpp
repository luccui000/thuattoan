#include <iostream>
#include <math.h>

#define N 10

int h[N];

void nhapMang(int *a, int n);
void xuatMang(int *a, int n);
void shellSort(int *a, int n);


int main() {

    int n, *a;
    std::cout << "Nhap so luong phan tu: "; std::cin >> n;
    a = new int[n];
    nhapMang(a, n);
    xuatMang(a, n);
    shellSort(a, n);
    xuatMang(a, n);

    std::cin.get();
}

void nhapMang(int *a, int n){
    for(int i = 0; i < n; i++) std::cin >> a[i];
}
void xuatMang(int *a, int n){
    for(int i = 0; i < n; i++) std::cout << a[i] << "\t";
    std::cout << std::endl;
}
void shellSort(int *a, int n) {
    for(int i = 0; i < N; i++) h[i] = pow(2, i) + 1;
    int k;
    for(int i = N - 1; i >= 0; i--) { 
        if(h[i] < n/2){
            k = i;
            break;
        }
    }
    int g, t, tmp;
    for(int it = k; it >= 0; it--){
        g = h[it];
        for(int jt = 0; jt <= g - 1; jt++){
            for(int kt = jt + g; kt < n; kt += g){
                tmp = a[kt];
                t = kt;
                while ((t > jt) && (a[t - g] > tmp))
                {
                    a[t] = a[t - g];
                    t = t - g;
                }
                if(t < kt){
                    a[t] = tmp;
                }
                
            }
        }
            for(int j = 0; j < n; j++) std::cout << a[j] << "\t";
    }
}