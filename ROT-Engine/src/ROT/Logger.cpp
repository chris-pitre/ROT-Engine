#include "Logger.h"

namespace ROT {
	Logger& Logger::getInstance() 
	{
		static Logger *instance = new Logger();
		return *instance;
	}

	Logger::Logger(){}
}