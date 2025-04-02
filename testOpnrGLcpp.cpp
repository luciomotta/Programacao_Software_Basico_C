#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

// Callback para ajustar o tamanho do viewport quando a janela é redimensionada
void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

int main() {
    // Inicializa o GLFW
    if (!glfwInit()) {
        std::cerr << "Falha ao inicializar o GLFW" << std::endl;
        return -1;
    }

    // Configurações da janela GLFW
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // OpenGL 3.x
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Cria uma janela GLFW
    GLFWwindow* window = glfwCreateWindow(800, 600, "Teste OpenGL com GLFW e GLAD", nullptr, nullptr);
    if (!window) {
        std::cerr << "Falha ao criar a janela GLFW" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Define o contexto OpenGL para a janela atual
    glfwMakeContextCurrent(window);

    // Carrega as funções OpenGL usando GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Falha ao inicializar o GLAD" << std::endl;
        return -1;
    }

    // Define o callback para redimensionamento da janela
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Define a cor de fundo
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Azul

    // Loop principal
    while (!glfwWindowShouldClose(window)) {
        // Limpa o buffer de cor
        glClear(GL_COLOR_BUFFER_BIT);

        // Troca os buffers e processa eventos
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Finaliza o GLFW
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}