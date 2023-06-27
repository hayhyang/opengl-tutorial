#include <GLFW/glfw3.h>
#pragma comment(lib, "glfw3.lib")

const unsigned int W = 300;
const unsigned int H = 300;

int main(void) {
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(W, H, "Hello GLFW", NULL, NULL);
    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
    
}