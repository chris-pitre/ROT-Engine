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
	return new Test_App();
}