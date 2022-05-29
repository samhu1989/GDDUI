#include "util/window.hpp"

namespace GDDUI_UTIL {
	Window::Window(int w, int h, std::string name) : width{w}, height{h}, name{name} {
		Init();
	}
	
	Window::~Window() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}
	
    void Window::Init() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
		
		window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
	}
}