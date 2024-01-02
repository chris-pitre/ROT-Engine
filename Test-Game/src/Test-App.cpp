#include <ROT.h>

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

	return new Test_App();
}