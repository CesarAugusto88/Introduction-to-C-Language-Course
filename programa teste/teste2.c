#include <stdio.h>

// Função para calcular a pertinência da temperatura na categoria "frio"
float pertinenciaFrio(float temp) {
    if (temp <= 15) return 1.0;
    if (temp > 15 && temp < 25) return (25 - temp) / 10.0;
    return 0.0;
}

// Função para calcular a pertinência da temperatura na categoria "quente"
float pertinenciaQuente(float temp) {
    if (temp >= 30) return 1.0;
    if (temp > 20 && temp < 30) return (temp - 20) / 10.0;
    return 0.0;
}

int main() {
    float temperatura;

    // Entrada do usuário
    printf("Digite a temperatura ambiente (°C): ");
    scanf("%f", &temperatura);

    // Calcula os graus de pertinência
    float frio = pertinenciaFrio(temperatura);
    float quente = pertinenciaQuente(temperatura);

    // Determina nível de ventilação com base nas regras fuzzy
    float ventilacao = (frio * 10 + quente * 100) / (frio + quente + 0.0001); // Evita divisão por zero

    // Exibe resultado
    printf("Nível de ventilação recomendado: %.2f%%\n", ventilacao);

    return 0;
}
