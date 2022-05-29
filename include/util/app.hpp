#ifndef __APP_HPP__
#define __APP_HPP__
#include "util/window.hpp"
#include <GLFW/glfw3.h>
#include <string>
namespace GDDUI_UTIL {
	class App {
	public:
	    virtual ~App() = default;
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;
	
		virtual void run() {};
	
	private:
		Window window{WIDTH, HEIGHT, "APP"};
	};
} // GDDUI_UTIL
#endif