#include<iostream>
#include"timerInterface.h"
using namespace std;
/*

public:
Timer();
Timer(Timer& T);
Timer(int d_hour,int d_minute,char* d_things_to_do);
~Timer();
void m_showtime_and_things() const;

int m_gethour() const;
int m_getminute() const;
char* m_getthingstodo() const;

void m_set_d_hour(int hour);
void m_set_d_minute(int minute);
void m_set_things_to_do(char* things_to_do);

Timer& m_addtime(Timer& T,int minutes);
Timer& m_minustime(Timer& T,int minutes);
Timer& m_compare(Timer& T1, Timer& T2);

friend Timer& operator+(Timer& T1, Timer& T2);
friend Timer& operator-(Timer& T1, Timer& T2);
friend bool operator<(Timer& T1, Timer& T2);
friend bool operator>(Timer& T1, Timer& T2);
friend bool operator==(Timer& T1, Timer& T2);
*/
int main() {
	Timer T1;
	T1.m_set_d_hour(8);
	T1.m_set_d_minute(0);
	T1.m_set_things_to_do("Get up");
	T1.m_showtime_and_things();
	return 0;
}