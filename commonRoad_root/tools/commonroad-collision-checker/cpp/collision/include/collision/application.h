/*
 * Application.h
 *
 *  Created on: Jun 12, 2018
 *  Author: Vitaliy Rusinov
 */

#ifndef CPP_COLLISION_APPLICATION_H_
#define CPP_COLLISION_APPLICATION_H_

#include "collision/application_settings.h"

#include "collision/solvers/fcl/performance_timers.h"

#if TIME_PROFILE_ENABLED
#define STACK_TIMER test::StackTimer
#else
#define STACK_TIMER
#endif

#if ENABLE_COLLISION_TESTS == 1

#include "tests/collision/online_tests/collision_tests.h"

#endif

static void tim(int a) {
  // placeholder
}

#define TIMER_windowQuery 0
#define TIMER_timeSlice 1
#define TIMER_collide 2

#if TIME_PROFILE_ENABLED
#define TIMER_START(x) test::start_timer(x);
#define TIMER_STOP(x) test::stop_timer(x);
#else
#define TIMER_START(x)
#define TIMER_STOP(x)
#endif

#endif /* CPP_COLLISION_APPLICATION_H_ */
