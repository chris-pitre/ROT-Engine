#include "Logger.h"

namespace ROT {
	Logger& Logger::getInstance() 
	{
		static Logger *instance = new Logger();
		return *instance;
	}

	Logger::Logger(){}

	void Logger::log(const std::string& message)
	{
		auto time = std::chrono::system_clock::now();
		fmt::print(fg(fmt::color::white), "[{:%T}] {}\n", time, message);
	}

	void Logger::info(const std::string& message)
	{
		auto time = std::chrono::system_clock::now();
		fmt::print(fg(fmt::color::light_blue), "[{:%T}] [INFO] {}\n", time, message);
	}

	void Logger::warn(const std::string& message)
	{
		auto time = std::chrono::system_clock::now();
		fmt::print(fg(fmt::color::yellow), "[{:%T}] [WARN] {}\n", time, message);
	}

	void Logger::error(const std::string& message)
	{
		auto time = std::chrono::system_clock::now();
		fmt::print(fmt::emphasis::bold | fg(fmt::color::red), "[{:%T}] [ERROR] {}\n", time, message);
	}
}