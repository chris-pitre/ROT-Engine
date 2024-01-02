#pragma once

#define FMT_HEADER_ONLY
#include "Core.h"
#include <fmt/color.h>
#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/compile.h>
#include <fmt/chrono.h>

namespace ROT {
	class ROT_API Logger
	{
	public:
		static Logger& getInstance();

		void log(const std::string& message);
		void info(const std::string& message);
		void warn(const std::string& message);
		void error(const std::string& message);
	private:
		Logger();
		Logger(const Logger&) = delete;
		Logger& operator=(const Logger&) = delete;
	};
}