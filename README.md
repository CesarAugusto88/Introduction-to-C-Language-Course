# Introduction-to-C-Language-Course
## Projeto Final: Regressão Linear com Gráfico em DISLIN [Projeto Final](https://github.com/CesarAugusto88/Introduction-to-C-Language-Course/blob/main/projeto_final)

Este projeto foi desenvolvido como parte do curso de Introdução à Linguagem C no INPE. O objetivo é calcular a regressão linear de um conjunto de pontos fornecidos pelo usuário e plotar o gráfico dos pontos e da linha de regressão usando a biblioteca DISLIN.

## Imagem do Projeto

Abaixo está uma captura de tela do gráfico gerado pelo programa:

![Gráfico de Regressão Linear](https://github.com/CesarAugusto88/Introduction-to-C-Language-Course/blob/main/projeto_final/regression_dislin.png)

## Requisitos

- Compilador C (`gcc`)
- Biblioteca DISLIN instalada
- Testado no Sistema Linux Fedora

## Instalação da DISLIN

1. Baixe a DISLIN do site oficial: [DISLIN Download](https://www.dislin.de/)
2. Extraia o arquivo e siga as instruções de instalação no arquivo `INSTALL`.
3. Adicione o caminho da DISLIN ao seu ambiente de compilação. Por exemplo:
   ```bash
   export DISLIN=/usr/local/dislin
   export LD_LIBRARY_PATH=$DISLIN:$LD_LIBRARY_PATH```
4. Parâmetros passados para configurar a compilação do programa:
   ``` gcc regressao_graf.c -o regressao_graf -I/usr/local/dislin/include -L/usr/local/dislin/lib -ldislin -lm ```
