#include <stdio.h>
#include <string.h>

struct Livro
{
    char titulo[100];
    char autor[100];
    int ano;
    int paginas;
    
    void imprimir()
    {
        printf("Titulo: %s\n", titulo);
        printf("Autor: %s\n", autor);
        printf("Ano: %d\n", ano);
        printf("Paginas: %d\n", paginas);
    }

    void ler ()
    {
        scanf("%[^\n]s%*c", titulo);
        scanf("%[^\n]s%*c", autor);
        scanf("%d", &ano);
        scanf("%d", &paginas);
    }

    
};

struct Biblioteca 
{
    Livro livros[10];
    int qtdLivros = 0;
    
    void lerUmNovoLivro() //capaz de ler um novo livro e armazenar no vetor de livros
    {
        if (qtdLivros < 10)
        {
            livros[qtdLivros].ler();
            qtdLivros++;
        }
        else
        {
            printf("Biblioteca cheia\n");
        }
    }

    void imprimirTodosOsLivros() //imprimir todos os livros da biblioteca
    {
        for (int i = 0; i < qtdLivros; i++)
        {
            livros[i].imprimir();
        }
    }
    
    void imprimirLivroComMaisPaginas() //imprimir o livro que contém o maior número de páginas de toda a biblioteca
    {
        int maior = 0;
        int indice = 0;
        for (int i = 0; i < qtdLivros; i++)
        {
            if (livros[i].paginas > maior)
            {
                maior = livros[i].paginas;
                indice = i;
            }
        }
        livros[indice].imprimir();
    }
};

int main ()
{
    Livro a[10];
    
        a[i].imprimir();
        a[i].ler();
    // biblioteca
    Biblioteca b[10];
    int op = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("1 - Ler um novo livro\n");  
        printf("2 - Imprimir livros\n");
        printf("3 - Imprimir livro com mais paginas\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        if (op == 1)
        {
            b[i].lerUmNovoLivro();
        }
        else if (op == 2)
        {
            b[i].imprimirTodosOsLivros();
        }
        else if (op == 3)
        {
            b[i].imprimirLivroComMaisPaginas();
        } else if (op == 4)
        {
            break;
        }
    return 0;
}
