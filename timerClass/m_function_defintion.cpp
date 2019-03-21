#include"timerInterface.h"
#include<iostream>
#include<string>
using namespace std;
Timer::Timer()
{
	cout << "call default constructor" << endl;
	m_set_d_hour(0);
	m_set_d_minute(0);
	m_set_things_to_do(nullptr);
}
Timer::Timer(Timer& T) 
{
	m_set_d_hour(T.m_gethour());
	m_set_d_minute(T.m_getminute());
	m_set_things_to_do(T.m_getthingstodo());
}
Timer::Timer(int d_hour, int d_minute, char* d_things_to_do) 
{   
	m_set_d_hour(d_hour);
	m_set_d_minute(d_minute);
	m_set_things_to_do(d_things_to_do);
}
Timer::~Timer()
{	
	delete d_things_to_do;
}

void Timer::m_showtime_and_things() const 
{
	cout << "Time now is " << m_gethour() << ":" << m_getminute() << endl;
	cout << "You have to " << m_getthingstodo() << endl;
}
int Timer::m_gethour() const {
	return d_hour;
}
int Timer::m_getminute() const {
	return d_minute;
}
char* Timer::m_getthingstodo() const{
	return d_things_to_do;
}
void Timer::m_set_d_hour(int hour) {
	d_hour = hour;
}
void Timer::m_set_d_minute(int minute) {
	d_minute = minute;
}
void Timer::m_set_things_to_do(char* things_to_do) {
	d_things_to_do = things_to_do;
}
void Timer::m_addtime(Timer& T, int minutes) {
	int change_hour = (minutes + T.m_getminute()) / 60;
	int change_minute = (minutes + T.m_getminute()) % 60;
	T.m_set_d_hour(change_hour+T.m_gethour());
	T.m_set_d_minute(change_minute+T.m_getminute());
}
void Timer::m_minustime(Timer& T, int minutes) {
	int change_hour = 0;
	while (minutes > T.m_getminute()) { T.m_set_d_minute(T.m_getminute()+60); change_hour++; }
	T.m_set_d_hour(T.m_gethour() - change_hour);
	T.m_set_d_minute(T.m_getminute() - minutes);
}
Timer& Timer::m_compare(Timer& T1, Timer& T2) {
	// the function return the smaller one since it is more urgent
	Timer result;
	if (T1.m_gethour() > T2.m_gethour()) { 
		cout << "return T2" << endl;
		return T2; 
	}
	else if (T1.m_gethour() == T2.m_gethour()) { 
		if (T1.m_getminute() > T2.m_gethour()) {
			cout << "return T2" << endl;
			return T2;
		}
		else if(T1.m_getminute() < T2.m_gethour()) {
			cout << "return T1" << endl;
			return T1;
		}
		else {
			cout << "On this time, you have two things to do " << endl;
			// you have to return  a object since return value should be 
			// a Timer reference 
			// if return type is Timer* you can return nullptr;
			return T1;
		}
	}
	else { 
		cout << "return T1" << endl;
		return T1; 
	}
}

Timer& operator+(Timer& T1, Timer& T2) {
	Timer result_timer;
	int hour_increase = (T1.m_getminute() + T2.m_getminute()) % 60;
	result_timer.m_set_d_minute((T1.m_getminute() + T2.m_getminute()) % 60);
	result_timer.m_set_d_hour(T1.m_gethour() + T2.m_gethour() + hour_increase);
	char* combination_two_thing = new char[strlen(T1.m_getthingstodo()) +
										   strlen(T2.m_getthingstodo()) + 2];
	strcat(combination_two_thing, T1.m_getthingstodo());
	strcat(combination_two_thing, " ");
	strcat(combination_two_thing, T2.m_getthingstodo());
	strcat(combination_two_thing, "\0");
	result_timer.m_set_things_to_do(combination_two_thing);
	return result_timer;
}
Timer& operator-(Timer& T1, Timer& T2) {
	Timer result_timer;
	if (T1 > T2) {
		if (T1.m_getminute() >= T2.m_getminute()) {
			result_timer.m_set_d_minute(T1.m_getminute() - T2.m_getminute());
			result_timer.m_set_d_hour(T1.m_gethour() -  T2.m_gethour());
		}
		else {
			result_timer.m_set_d_minute(T1.m_getminute() + 60 - T2.m_getminute());
			result_timer.m_set_d_hour(T1.m_gethour() - 1 - T2.m_gethour());
		}
		return result_timer; 
	}
	else if (T1 < T2) {
		if (T1.m_getminute() <= T2.m_getminute()) {
			result_timer.m_set_d_minute(T2.m_getminute() - T1.m_getminute());
			result_timer.m_set_d_hour(T2.m_gethour() - T1.m_gethour());
		}
		else {
			result_timer.m_set_d_minute(T2.m_getminute() + 60 - T1.m_getminute());
			result_timer.m_set_d_hour(T2.m_gethour() - 1 - T1.m_gethour());
		}
		return result_timer; 
	}
	return result_timer;
}
bool operator<(Timer& T1, Timer& T2) {
	if (((T1.m_getminute() < T2.m_getminute())&& (T1.m_gethour() <= T2.m_gethour())))
	{
		return true;
	}
	else {
		return false;
	}
}
bool operator>(Timer& T1, Timer& T2) {
	if (((T1.m_getminute() > T2.m_getminute()) && (T1.m_gethour() >= T2.m_gethour())))
	{
		return true;
	}
	else {
		return false;
	}
}
bool operator==(Timer& T1, Timer& T2) {
	if ((T1.m_getminute() == T2.m_getminute()) && (T1.m_gethour() == T2.m_gethour())) {
		return true;
	}
	else {
		return false;
	}
}

