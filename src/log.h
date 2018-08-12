#pragma once

#include <inttypes.h>


#define CPUINFO_LOG_DEBUG_PARSERS 0

#ifndef CPUINFO_LOG_LEVEL
	#define CPUINFO_LOG_LEVEL CLOG_ERROR
#endif


void cpuinfo_log_debug(const char* fmt, ...);
void cpuinfo_log_info(const char* fmt, ...);
void cpuinfo_log_warning(const char* fmt, ...);
void cpuinfo_log_error(const char* fmt, ...);
void cpuinfo_log_fatal(const char* fmt, ...);
