#pragma once

class Progression {
private:
	double first;
	unsigned int second;
public:
	void init(double first, unsigned int second);
	void read();
	void show();
	double element(int j);
};

Progression make_progression(double first, unsigned int second);