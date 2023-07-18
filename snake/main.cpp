/*
	Este algoritmo, feito na biblioteca OpenGL, representa
	o jogo Snake. O jogo Snake consiste em uma cobra que navega
	por uma janela 2D coletando alimentos (polígonos) e cresce à
	medida que vai se alimentando, também existe uma regra de game over
	(morder a própria calda). Este algoritmo pode ser ampliado para mais
	funções.

	Autores: Alisson Jaques, Rony Freitas e Vitor Soares
*/

#include <stdio.h>
#include <ctime>
#include <GL/glut.h>
#include <stdio.h>
#include <time.h>
#include <GL/glut.h>
#define CIMA 1
#define BAIXO 2
#define ESQUERDA 3
#define DIREITA 4

// Variaveis de status
GLint lvl = 1;
GLint food = 0;
GLint length = 0;
GLbyte gameOver = true;

// Variaveis da cobrinha
GLint bodyPos[2][40] = {{}};
GLint _x = 10;
GLint _y = 20;
GLint _oldX[2] = {};
GLint _oldY[2] = {};
GLbyte direction = 0;

// Variaveis da comidinha
GLint _bx = 0;
GLint _by = 0;

// Variaveis da tela
GLint _w = 400;
GLint _h = 350;
GLint _Giw = 10;
GLint _Gih = 30;
GLint _Gfw = 270;
GLint _Gfh = 240;


int g_nFPS = 0, g_nFrames = 0;

// Variaveis do mouse
//GLint   Tx = 0;
//GLint   Ty = 0;

void resetGame() {
    _x = 10;
    _y = 20;
    direction = 0;
    lvl = 1;
    food = 0;
    length = 0;
    gameOver = false;
}
void write(char * string) {
    while ( * string) {
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, * string++);
    }
}
void title() {
    char tmp_str[40];
    glColor3f(0, 0, 0);
    glRectf(_Giw, _Gih, _Gfw, _Gfh);
    glColor3f(1, 1, 1);
    glRasterPos2f(85, 210);
    write("Snake Game");
    glColor3f(.4, .4, .4);
    glRectf(65, 180, 200, 195);
    glColor3f(1, 1, 1);
    glRasterPos2f(105, 185);
    write("New Game");
}

void updateSnake() {
    int i;
    glPushMatrix();
    glTranslatef(_x, _y, 0.0);
    glColor3f(1, 0, 0);
    glRectf(10.0f, 10.0f, 20.0f, 20.0f);
    glPopMatrix();
    // body
    for (i = 0; i < length; i++) {
        glPushMatrix();
        glTranslatef(bodyPos[0][i], bodyPos[1][i], 0.0);
        glColor3f(1, 0, 0);
        glRectf(10.0f, 10.0f, 20.0f, 20.0f);
        glPopMatrix();
    }
}
void game() {
    char tmp_str[40];

    // bakcground
    glColor3f(0, 0, 0);
    glRectf(_Giw, _Gih, _Gfw, _Gfh);

    // food
    glPushMatrix();
    glTranslatef(_bx, _by, 0.0);
    glColor3f(1, 1, 0);
    glRectf(10.0f, 10.0f, 20.0f, 20.0f);
    glPopMatrix();

    // Status
    glColor3f(0, 0, 0);
    glRasterPos2f(10, 10);
    sprintf(tmp_str, "Lvl: %d Pts: %d", lvl, food);
    write(tmp_str);
}

int GetRandomNumber(int high, int low) {
    return (rand() % (high - low)) + low;
}

void newFood() {
    time_t seconds;
    time( & seconds);
    srand((unsigned int) seconds);
    _bx = GetRandomNumber(_Gfw / 10 - _Giw, _Giw / 10 + 1);
    _bx = _bx * 10;
    _by = GetRandomNumber(_Gfh / 10 - _Gih, _Gih / 10 + 1);
    _by = _by * 10;
}

bool collision() {
    int i;
    for (i = 0; i < length; i++) {
        if (bodyPos[0][i] == _x && bodyPos[1][i] == _y) return true;
    }
    return false;
}

void go(int value) {
    int i;
    _oldX[1] = _x;
    _oldY[1] = _y;
    switch (direction) {
        case DIREITA:
            _x += 10;
            if (_x > _Gfw - 20) _x = _Giw - 10;
            break;
        case ESQUERDA:
            _x -= 10;
            if (_x < 0) _x = _Gfw - 20;
            break;
        case CIMA:
            _y += 10;
            if (_y > _Gfh - 20) _y = _Gih - 10;
            break;
        case BAIXO:
            _y -= 10;
            if (_y < 20) _y = _Gfh - 20;
            break;
    }
    if (collision()) {
        gameOver = true;
    };

    if (_x == _bx && _y == _by) {
        food++;
        if (food < 40) {
            length++;
        }
        if (food % 5 == 0 && lvl < 15) {
            lvl++;
        }
        newFood();
    }
    for (i = 0; i < length; i++) {
        _oldX[0] = _oldX[1];
        _oldY[0] = _oldY[1];
        _oldX[1] = bodyPos[0][i];
        _oldY[1] = bodyPos[1][i];
        bodyPos[0][i] = _oldX[0];
        bodyPos[1][i] = _oldY[0];
    }
    glutTimerFunc(140 - lvl * 8, go, 0);
}
void draw(void) {
    // Limpa tela
    glClear(GL_COLOR_BUFFER_BIT);
    if (!gameOver) {
        game();
        updateSnake();
    } else {
        title();
    }
    // Atualiza a tela
    glutPostRedisplay();
    glutSwapBuffers();
}

void keyboard(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_RIGHT:
            if (direction != ESQUERDA)
                direction = DIREITA;
            break;
        case GLUT_KEY_LEFT:
            if (direction != DIREITA)
                direction = ESQUERDA;
            break;
        case GLUT_KEY_UP:
            if (direction != BAIXO)
                direction = CIMA;
            break;
        case GLUT_KEY_DOWN:
            if (direction != CIMA)
                direction = BAIXO;
            break;
    }
}

void mouse(int botao, int state, int x, int y) {
    if (state == GLUT_UP && x > 90 && x < 280 && y > 80 && y < 100) {
        resetGame();
    }
}

void init(void) {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void changeWindowSize(GLsizei w, GLsizei h) {
    glViewport(0, 0, _w, _h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h) {
        gluOrtho2D(0.0f, 250.0f, 0.0f, 250.0f * _h / _w);
    } else {
        gluOrtho2D(0.0f, 250.0f * _w / _h, 0.0f, 250.0f);
    }
}

int main(int argc, char ** argv) {
    glutInit( & argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(_w, _h);
    glutInitWindowPosition(500, 400);
    glutCreateWindow("Jogo da cobrinha");
    glutSpecialFunc(keyboard);
    glutDisplayFunc(draw);
    glutReshapeFunc(changeWindowSize);
    glutMouseFunc(mouse);
    newFood();
    go(0);
    init();
    glutMainLoop();
}
