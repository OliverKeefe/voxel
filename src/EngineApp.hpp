#pragma once

#include "LvePipeline.hpp"
#include "LveWindow.hpp"

namespace lve {
    class EngineApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();

    private:
        LveWindow lveWindow{WIDTH, HEIGHT, "Vulkan Engine"};
        LvePipeline lvePipeline{"src/shaders/simple_shader.vert.spv", "src/shaders/simple_shader.frag.spv"};
    };
}