    if (strlen(nome) <= 4)
    {
        printf("O nome deve ter mais de 4 caracteres. Tente novamente.\n");
        free(nome);           // Liberando a memória antes de chamar a função recursivamente
        return definirNome(); // Chamando a função novamente
    }
