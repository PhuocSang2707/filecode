# filecode
#include <iostream>
#include <iomanip> 

using namespace std;
struct ThongSoXung {
    double chuKy;
    double tanSo;
    double dutyCycle;
};
ThongSoXung tinhThongSoXung(double tOn, double tOff) {
    ThongSoXung kq;
    kq.chuKy = tOn + tOff;
    if (kq.chuKy > 0) {
        kq.tanSo = 1.0 / kq.chuKy;
        kq.dutyCycle = (tOn / kq.chuKy) * 100.0;
    } else {
        kq.tanSo = 0;
        kq.dutyCycle = 0;
    }
    return kq;
}
int main() {
    cout << fixed << setprecision(4);
    cout << "B TÍNH THÔNG SỐ XUNG VUÔNG\n";
    double tOn, tOff;
    cout << "Nhap thoi gian muc cao T_on (giay): ";
    cin >> tOn;
    cout << "Nhap thoi gian muc thap T_off (giay): ";
    cin >> tOff;
    
    if (tOn <= 0 || tOff <= 0) {
        cout << "Loi: Thoi gian phai lon hon 0!\n";
    } else {
        ThongSoXung kq1 = tinhThongSoXung(tOn, tOff);
        cout << "\n:\n";
        cout << "+ Chu ky (T)  : " << kq1.chuKy << " s\n";
        cout << "+ Tan so (f)  : " << kq1.tanSo << " Hz\n";
        cout << "+ Duty Cycle  : " << setprecision(2) << kq1.dutyCycle << " %\n";
    }
    
   
    return 0;
}