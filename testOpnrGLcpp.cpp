#include <GL/glut.h>

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0); // Cor de fundo preta
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0); // Define a área de visualização
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0); // Cor vermelha
    glBegin(GL_QUADS);
        glVertex2i(100, 100);
        glVertex2i(400, 100);
        glVertex2i(400, 400);
        glVertex2i(100, 400);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Retângulo com OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

