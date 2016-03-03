#pragma once
#include <iostream>

#include "clock.h"
#include "bed.h"
#include "coffeeMaker.h"
#include "curtain.h"
#include "alarm.h"
#include "light.h"

using namespace std;
const int SIZE = 10;

class morningGlory
{
public:
	morningGlory();
	~morningGlory();
	void openGUI() const;
	void closeGUI() const;
	void run();

private:
	int setMode();
	int mode[SIZE];
	clock clock_;
	bed bed_;
	coffeeMaker coffee_;
	curtain curtain_;
	alarm alarm_;
	light light_;
};