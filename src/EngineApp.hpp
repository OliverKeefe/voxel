#pragma once

#include "LveWindow.hpp"

namespace lve {
    class EngineApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();

    private:
        LveWindow lveWindow{WIDTH, HEIGHT, "Vulkan Engine"};
    };
}