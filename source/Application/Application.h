#pragma once
#define GLFW_INCLUDE_NONE
#include "UserInterface.h"
#include "WeatherController.h"
#include <GLFW/glfw3.h>
class Application
{
public:
	bool Start(int width, int height);
	void Update();
	void Shutdown();
	GLFWwindow* GetWindow() { return m_window; };
private:
	void ProcessInput(GLFWwindow* window);


private:
	GLFWwindow* m_window;
	WeatherController m_mainController;
	UserInterface m_baseUI;
};

