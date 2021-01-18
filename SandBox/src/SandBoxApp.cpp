#include <Tacky.h>

class Sandbox : public Tacky::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Tacky::Application* Tacky::CreateApplication()
{
	return new Sandbox;
}