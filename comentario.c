#include <stdio.h>

/*
Pergunta: Para que serve #include <stdio.h> ?
Resposta:
Esse comando inclui a biblioteca padrão de entrada e saída do C.
Ela é necessária para usar funções como printf() e scanf().
Sem stdio.h, o compilador não reconheceria a função printf.
*/

int main(void)
{
    /*
    Pergunta: Onde o programa começa?
    Resposta:
    O programa começa na função main().
    Independentemente de onde ela esteja no arquivo, a execução
    sempre inicia pela função main.
    */

    printf("Hello, World!\n");

    /*
    Pergunta: O que acontece se remover o return 0?
    Resposta:
    Em C moderno, se o return 0 for removido, o compilador
    assume automaticamente que a função main retorna 0.
    Ou seja, o programa ainda funciona normalmente.
    Em C mais antigo, isso podia gerar avisos.
    */

    return 0;
}

/*
Pergunta: O que acontece se remover o \n ?
Resposta:
O \n é o caractere de nova linha (quebra de linha).
Se ele for removido, o texto será impresso,
mas o cursor não irá para a linha de baixo.
O próximo texto exibido no terminal aparecerá na mesma linha.
*/
