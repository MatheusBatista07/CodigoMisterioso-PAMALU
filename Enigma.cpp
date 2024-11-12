#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

setlocale(LC_ALL, "Portugese"); 

// Em uma livraia, o estudante precisa encontrar o livro DOM CASMERDA, ao perguntar a dona como a livraria era organizada, ela falou que não era organizada convencionalmente.

// Função para o Enigma 1 - Como a livraria é organizada
void enigma1() {
    char resposta[50];

    printf("Enigma 1: Como a livraria era organizada?\n");
    printf("Dica 1: A dona era fanatica pela sua lingua e apreciava os recursos linguisticos usados pelos autores.\n");
    printf("Dica 2: Os autores apreciados pela dona faziam parte da escola literária modernismo.\n");
    printf("Dica 3: Um dos recursos mais apreciados pela dona era aqueles que atribuiam efeito ao texto, dando ênfase à uma ideia.\n");
    printf("Digite sua resposta: ");
    scanf("%49s", resposta);  
    
    if (strcmp(resposta, "") == 0) {
        printf("Correto! A livraria era organizada por ...\n\n");
    } else {
        printf("Resposta errada. Tente novamente!\n\n");
    }
}

// Função para o Enigma 2 - Qual a seção o livro estava?
void enigma2() {
    char resposta[50];

    printf("Enigma 2: Qual a secao o livro estava?\n");
    printf("Dica 1: As pessoas costumam dar nomes à coisas inexistentes.\n");
    printf("Dica 2: \"Joana, cuidado ao lavar as louças! Não quero saber de nenhuma asa de xícara quebrada.\"\n");
    printf("Digite sua resposta: ")
    scanf("%49s", Resposta); 

    if (strcmp(resposta, Pleonasmo) == 0) {
        printf("Correto! O livro estava na seção de Cata.\n\n");
    } else {
        printf("Resposta errada. Tente novamente!\n\n");
    }
}

// Função para o Enigma 3 - Qual estante o livro se encontrava?
void enigma3() {
    char resposta[50];

    printf("Enigma 3: Qual estante o livro se encontrava?\n");
    printf("Dica 1: Quando eu não sei o nome certo, eu chamo da forma mais famosa.\n");
    printf("Dica 2: \"Bentinho limpou o ouvido com cotonete.\"\n");
    printf("Digite sua resposta: ");
    scanf("%49s", resposta);  
    
    if (strcmp(resposta, "Meto") == 0) {
        printf("Correto! O livro estava na estante de Ironia.\n\n");
    } else {
        printf("Resposta errada. Tente novamente!\n\n");
    }
}

int main() {
    printf("Bem-vindo ao mistério da livraria! Vamos tentar encontrar o livro 'Dom Casmerda'.\n");

    enigma1();
    enigma2();
    enigma3();

    printf("Parabéns! Você resolveu todos os enigmas e encontrou o livro!\n");
    return 0;
}

