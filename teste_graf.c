/* Cesar - 26/02/2025
 * compilar com dislin (Linux):
 *  gcc teste_graf.c -o teste_graf -I/usr/local/dislin/include -L/usr/local/dislin/lib -ldislin -lm
 * */

#include <stdio.h>
#include "dislin.h"

int main() {
    int n = 100;
    float x[100], y[100];

    // Preenche os arrays x e y
    for (int i = 0; i < n; i++) {
        x[i] = i * 0.1;
        y[i] = x[i] * x[i];
    }

    metafl("XWIN");  // Saída gráfica para uma janela X11
    disini();        // Inicializa o DISLIN

    // Define os rótulos dos eixos
    name("Eixo X", "x");  // Rótulo do eixo X
    name("Eixo Y", "y");  // Rótulo do eixo Y

    // Define o título do gráfico
    titlin("Gráfico de Exemplo", 1);  // Título do gráfico (linha 1)

    // Configura os eixos
    graf(0.0, 10.0, 0.0, 1.0, 0.0, 100.0, 0.0, 10.0);

    // Plota a curva
    curve(x, y, n);

    disfin();  // Finaliza o DISLIN
    return 0;
}
