
# Xadrez

Este é um jogo desenvolvido em linguagem C que exibe o movimento de algumas peças do jogo de xadrez da seguinte forma: 
- Bispo: 5 casas na diagonal (direita e para cima) 
- Torre: 5 casas para a direita 
- Rainha: 8 casas para a esquerda 
- Cavalo: movimento em L, 2 casa para cima e 1 para a direita

Foram implementados loops aninhados na movimentação do bispo e funções recursivas no código-fonte.

## Pré-requisitos

- **Compilador C:** É necessário ter o GCC (GNU Compiler Collection) ou outro compilador de C instalado no seu sistema.
- **Terminal ou Prompt de Comando:** Necessário para compilar e executar o código.
- **Codificação UTF-8:** Certifique-se de que seu terminal esteja configurado para exibir corretamente caracteres especiais.

## Instruções para Compilação e Execução

### Unix, Linux e macOS

1. Abra o terminal.
2. Navegue até o diretório onde está o arquivo `xadrez.c`:
   ```bash
   cd caminho/para/diretorio
   ```
3. Compile o código:
   ```bash
   gcc xadrez.c -o xadrez
   ```
4. Execute o programa:
   ```bash
   ./xadrez
   ```

### Windows

#### Usando MinGW (recomendado)

1. Abra o Prompt de Comando.
2. Navegue até o diretório onde está o arquivo `xadrez.c`:
   ```
   cd caminho\para\diretorio
   ```
3. Compile o código:
   ```
   gcc xadrez.c -o xadrez.exe
   ```
4. Execute o programa:
   ```
   xadrez.exe
   ```

#### Usando Compilador do Visual Studio

1. Abra o Prompt de Comando do Desenvolvedor Visual Studio.
2. Navegue até o diretório:
   ```
   cd caminho\para\diretorio
   ```
3. Compile o programa:
   ```
   cl xadrez.c
   ```
4. Execute o programa:
   ```
   xadrez.exe
   ```

## Observações

- Caso caracteres especiais não sejam exibidos corretamente, ajuste seu terminal para UTF-8. O comando `chcp 65001` no terminal do Windows ativa esses caracteres temporariamente.
- Este projeto tem propósito didático.

---

Desenvolvido como parte do desafio de implementação do jogo de Xadrez em linguagem C.
