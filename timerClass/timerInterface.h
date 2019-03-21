// class timer interface 
class Timer
{
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

	void m_addtime(Timer& T,int minutes);
	void m_minustime(Timer& T,int minutes);
	Timer& m_compare(Timer& T1, Timer& T2);

	friend Timer& operator+(Timer& T1, Timer& T2);
	friend Timer& operator-(Timer& T1, Timer& T2);
	friend bool operator<(Timer& T1, Timer& T2);
	friend bool operator>(Timer& T1, Timer& T2);
	friend bool operator==(Timer& T1, Timer& T2);

private:
	int d_hour;
	int d_minute;
	char* d_things_to_do;
};

