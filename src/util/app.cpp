#include "util/app.hpp"

namespace GDDUI_UTIL {
    void App::Run()
    {
        while(!window.IsClosing()) {
            PollEvents();
        }
    }
}