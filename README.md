# uriproblems

Coleção de 42 programas em C++ para praticar algoritmos e resolver exercícios de programação competitiva, incluindo problemas do URI Online Judge. Cada arquivo é um programa independente: recebe a entrada pelo terminal e escreve o resultado na saída padrão.

Os nomes dos arquivos identificam os exercícios. A coleção reúne abordagens de ordenação, algoritmos gulosos, manipulação de strings e simulação.

## Alguns exemplos

| Arquivo | Tema estudado |
|---|---|
| [num inversoes.cpp](<num inversoes.cpp>) | Contagem de inversões com merge sort |
| [apagandoeganhando.cpp](apagandoeganhando.cpp) | Escolha gulosa de dígitos, com remoções no fim de uma string |
| [N meetings in one room.cpp](<N meetings in one room.cpp>) | Seleção de intervalos ordenados pelo horário de término |
| [all in all.cpp](<all in all.cpp>) | Verificação de subsequência entre strings |
| [campominado.cpp](campominado.cpp) | Simulação de vizinhança em um vetor |
| [botastrocadas.cpp](botastrocadas.cpp) | Contagem de pares por tamanho e lado |
| [maquinadecafe2.cpp](maquinadecafe2.cpp) | Comparação direta do custo de três escolhas |

## Compilar e executar

Compile um arquivo por vez, pois os programas têm funções `main` próprias. Um compilador GCC com suporte a GNU C++17 acomoda os recursos usados na coleção, incluindo extensões presentes em alguns fontes.

Por exemplo, para executar a contagem de inversões:

```bash
g++ -std=gnu++17 -O2 "num inversoes.cpp" -o inversoes
./inversoes
```

Entrada de exemplo:

```text
5
5 4 3 2 1
```

Saída esperada:

```text
10
```

Também é possível ler a entrada de um arquivo:

```bash
./inversoes < entrada.txt
```

Os comandos de execução acima usam Bash. No PowerShell, execute o binário como `./inversoes.exe` e forneça a entrada pelo terminal.

## Formatos e validação

Cada problema define seu próprio formato de entrada, quantidade de casos e condição de parada. Confira o código e o enunciado correspondente antes de reutilizar um arquivo; não há um formato único para a coleção.
