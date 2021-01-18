#pragma once

#ifdef TACKY_PLATFORM_WINDOWS

extern Tacky::Application* Tacky::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Tacky::CreateApplication();
	app->Run();
	delete app;
}

#endif