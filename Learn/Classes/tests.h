#ifndef _TESTS_H_
#define _TESTS_H_

//#include "ActionsTest/ActionsTest.h"
#include "TouchScaleTest/TouchScaleTest.h"
#include "TouchEventTest/TouchEventTest.h"

enum {
	TEST_TOUCH_SCALE = 0,
	TEST_TOUCH_EVENT,
	TESTS_COUNT,
};

const std::string g_aTestNames[TESTS_COUNT] = {
		"Touch Scale",
		"Touch Event"};

#endif
