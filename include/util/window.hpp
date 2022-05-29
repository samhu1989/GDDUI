#ifndef __WINDOW_HPP__
#define __WINDOW_HPP__
#include <GLFW/glfw3.h>
#include <string>
namespace GDDUI_UTIL {
	class Window {
	public:
		Window(int w, int h, std::string name);
		virtual ~Window();
	
	private:
		void Init();
		const int width;
		const int height;
		
		std::string name;
		GLFWwindow* window;
	};
} // GDDUI_UTIL
#endif