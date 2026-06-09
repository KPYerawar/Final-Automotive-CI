#include <iostream>
using namespace std;

bool alarm_triggered = false;
 
void trigalarm() {
    cout << "WARNING: Seatbelt missing!" << endl;
    alarm_triggered = true;
}

int main() {
    int car_speed = 90;
    int seatbelt = 1; // 0 matlab seatbelt nahi pehni

    if (car_speed > 80 && seatbelt == 0) {
        trigalarm();
    } else {
        cout << "Normal condition" << endl;
    }

    if (alarm_triggered == true) {
        cout << "TEST PASSED: Alarm working fine!" << endl;
        return 0; // GitHub ko batayega ki test PASS ho gaya
    } else {
        cout << "TEST FAILED!" << endl;
        return 1; // GitHub ko batayega ki test FAIL ho gaya
    }
}
