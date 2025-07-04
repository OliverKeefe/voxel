#include "EngineApp.hpp"

namespace lve {
    void EngineApp::run() {
        while (!lveWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}