# CS50x

Minhas soluções para os problemas do curso [CS50x](https://cs50.harvard.edu/x/2024/).

## Compilando

A etapa dita "compilação" é composta por quatros passos:

- Pré-processamento
- Compilação
- Assemblagem
- Ligação

1. No processo de pré-processamento, o compilador irá processar as diretivas de pré-processamento, como `#include` e `#define`. Meio que um "copiar e colar" do conteúdo dos arquivos incluídos no seu próprio arquivo, para que o compilador saiba o que está sendo referenciado, como são definidas as funções e variáveis que você incluiu.

2. Na compilção o código é traduzido de C para Assembly, que é uma linguagem de baixo nível, mais próxima do hardware.

3. Na assemblagem, o código em Assembly é traduzido para binário, que é o código de máquina que o processador entende.

4. Por fim, na ligação, o código binário é ligado com as bibliotecas necessárias incluídas no código, como a `cs50.h`, que contém funções que não são nativas do C e talvez `stdio.h`, que contém funções de entrada e saída. No final, é gerado um arquivo executável.

Nestes exemplos vamos compilar o araquivo `hello.c` e gerar o executável.

### Make

```bash
make hello
./hello
```

### Clang

```bash
clang hello.c
./a.out
```

```bash
clang -o hello hello.c
./hello
```

Para incluir uma biblioteca que que não é nativa do C, é preciso passar a flag `-l` com o nome da lib.
Por exemplo, para incluir `cs50.h`:

```bash
clang -o hello hello.c -lcs50
./hello
```
