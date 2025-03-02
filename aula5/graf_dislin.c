// graf.c - exibe grafico para variacao de temperatura
/* Cesar - 26/02/2025
 * compilar com dislin (Linux):
 *  gcc graf_dislin.c -o graf_dislin -I/usr/local/dislin/include -L/usr/local/dislin/lib -ldislin -lm
 * */

#include <stdio.h>
#include "dislin.h"

void preencher(float t[7])
{
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("%da. temperatura? ", i + 1);
        scanf("%f", &t[i]);
    }
}

float media(float t[7])
{
    int i;
    float s = 0;

    for (i = 0; i < 7; i++)
        s += t[i];
    return s / 7;
}

void grafico(float t[7], float m)
{
    char *ctit = "Variacao da Temperatura Semanal";
    float x[7], y1[7], y2[7];
    int i;

    // Preenche os arrays x, y1 e y2
    for (i = 0; i < 7; i++)
    {
        x[i] = i + 1;   // Dias da semana (1 a 7)
        y1[i] = 0.0;    // Base das barras (sempre 0)
        y2[i] = t[i];   // Altura das barras (temperaturas)
    }

    // Inicializa o DISLIN
    metafl("XWIN");  // Saída gráfica para uma janela X11
    disini();        // Inicializa o DISLIN

    // Configura o título do gráfico
    titlin(ctit, 1);

    // Configura os eixos
    axspos(300, 1800);  // Posição do eixo X e Y
    axslen(1600, 700);  // Tamanho dos eixos
    name("Dias da Semana", "x");  // Rótulo do eixo X
    name("Temperatura (C)", "y"); // Rótulo do eixo Y
    graf(0.0, 7.5, 1.0, 1.0, 0.0, 40.0, 0.0, 5.0);  // Configura os eixos

    // Desenha as barras
    color("blue");  // Define a cor das barras
    bars(x, y1, y2, 7);  // Desenha as barras

    // Linha da média
    float x_media[2] = {0.0, 7.5};
    float y_media[2] = {m, m};
    color("red");  // Define a cor da linha como vermelho
    curve(x_media, y_media, 2);  // Desenha a linha da média

    // Finaliza o DISLIN
    disfin();
}

int main(void)
{
    float t[7], m;

    preencher(t);
    m = media(t);
    grafico(t, m);

    return 0;
}
