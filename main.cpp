#include <GLFW/glfw3.h>
int main(){
    GLFWwindow* window;
    if (!glfwInit()){
        return -1;
    }
    window = glfwCreateWindow(400, 400, "my name", NULL, NULL);
    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();
    }
    return 0;
}