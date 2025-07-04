#include "Engine.hpp"
import vulkan_hpp;
#include <GLFW/glfw3.h>


#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main() {
    Engine engine;

    try {
        engine.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    return EXIST_FAILURE;
    }

    return EXIST_SUCESS;
}