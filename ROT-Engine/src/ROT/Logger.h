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

		template<typename... T>
		void log(const std::string& message, T&&... args)
		{
			auto time = std::chrono::system_clock::now();
			fmt::print(fg(fmt::color::white), "[{:%T}] ", time);
			fmt::print(message, std::forward<T>(args)...);
			printf("\n");
		}

		template<typename... T>
		void info(const std::string& message, T&&... args)
		{
			auto time = std::chrono::system_clock::now();
			fmt::print(fg(fmt::color::light_blue), "[{:%T}] [INFO] ", time);
			fmt::print(fg(fmt::color::light_blue), message, std::forward<T>(args)...);
			printf("\n");
		}

		template<typename... T>
		void warn(const std::string& message, T&&... args)
		{
			auto time = std::chrono::system_clock::now();
			fmt::print(fg(fmt::color::yellow), "[{:%T}] [WARN] ", time);
			fmt::print(fg(fmt::color::yellow), message, std::forward<T>(args)...);
			printf("\n");
		}

		template<typename... T>
		void error(const std::string& message, T&&... args)
		{
			auto time = std::chrono::system_clock::now();
			fmt::print(fmt::emphasis::bold | fg(fmt::color::red), "[{:%T}] [ERROR] ", time);
			fmt::print(fg(fmt::color::red), message, std::forward<T>(args)...);
			printf("\n");
		}
	private:
		Logger();
		Logger(const Logger&) = delete;
		Logger& operator=(const Logger&) = delete;
	};
}