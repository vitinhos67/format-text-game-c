#include <stdio.h>

int receberIdadeEValidar();
void definirHabilidades();
char *definirNome();

struct Personagem criarPersonagem()
{
    struct Personagem personagem;

    int idade;
    char *nome;
    printf("\nVamos definir as caracteristicas do seu personagem...\n");

    nome = definirNome();
    idade = receberIdadeEValidar();

    personagem.nome = nome;
    personagem.idade = idade;

    printf("As espeficicações do seu personagem é:\nnome:%s\nidade:%d",
           personagem.nome,
           personagem.idade);

    return personagem;
}

void definirHabilidades()
{
}

char *definirNome()
{
    char *nome = (char*)malloc(50);  // Aqui aloca memoria para o nome...


    printf("\nVamos começar definindo o nickname do seu personagem...\nDigite aqui:");
    scanf("%49s", nome); // Aqui eu limito a quantidade de caracter com 0 49 para nao atingir o buffer.

    int tamanho = strlen(nome);


    if (tamanho <= 4)
    {
        printf("O nome deve ter mais de 4 caracteres. Tente novamente.\n");
        free(nome);           // Liberando a memória antes de chamar a função
        return definirNome();
    }

    return nome;
}

int receberIdadeEValidar()
{

    int idade;

    printf("Tudo bem, agora digite sua idade:");
    scanf("%d", &idade);

    return (idade < 18 || idade > 100) ? receberIdadeEValidar() : idade;
}
