#include <ROT.h>
#include <ROT/Logger.h>

class Test_App : public ROT::Application
{
public:
	Test_App()
	{

	}

	~Test_App()
	{

	}
};

ROT::Application* ROT::CreateApplication() 
{
	Logger& logger = Logger::getInstance();

	logger.log("Starting ROT");
	logger.info("Testing logging with variables {}", 70);
	logger.warn("Warning code {}", 89723);
	logger.error("you fucked up buddy");


	return new Test_App();
}