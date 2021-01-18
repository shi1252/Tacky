#pragma once

#include "Core.h"

namespace Tacky
{
	class TACKY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}