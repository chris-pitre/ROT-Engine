#pragma once

#ifdef ROT_PLATFORM_WINDOWS

extern ROT::Application* ROT::CreateApplication();

int main(int argc, char* argv[])
{
	auto app = ROT::CreateApplication();
	app->Run();
	delete app;
}

#endif