#pragma once

#include "Core.h"

namespace ROT {
	class ROT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Define in client
	Application* CreateApplication();
}
