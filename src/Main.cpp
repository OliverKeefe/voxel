#include "EngineApp.hpp"
#include <GLFW/glfw3.h>


#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main() {
    lve::EngineApp app{};

    try {
        app.run();
    } catch (const std::exception &e) {

    }
}