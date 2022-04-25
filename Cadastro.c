#include<stdio.h>
#define SIZE 200
char nome [SIZE] [50];
char emails [SIZE] [50];
int cpf [SIZE];
int op;
void cadastro();
void pesquisar();
void lista();
int main(void){
    cadastro();
    lista();
    //pesquisar();

}
void lista(){
    int i;
    for(i=0;i<SIZE;i++){
     if(CPF[i]>0){
            printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
         
    }else{
        break;
    }
}
void cadastro(){
    static int linha;
    do{
    printf("\nDigite o nome: ");
    scanf("%s",&nome[linha]);
    printf("\nDigite o email: ");
    scanf("%s",&email[linha]);
    printf("\nDigite o CPF: ");
    scanf("%d",&cpf[linha]);
    printf("\nDigite 1 para continuar ou outro valor para sair: ");
    scanf("%d",&op);
    linha++;

    }while(op==1);

}// fim da funcao cadastro
void pesquisar(){
    int cpfPesquisar;
    char emailPesquisar[50];
    int i;
    do{
        printf("\nDigite 1 para pesquisar CPF ou 2 para pesquisar por email ");
        scanf("%d",op);
        switch(op){
            caso 1:
                printf("\nDigite o CPF")
                scanf("%d",&cpfPesquisar);
                for(i=0;i<SIZE;i++){
                    if(cpf[i]==cpfPesquisa){
                        printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf)
                    }
                }  
            break;
           caso 2: 
                   for(i=0;i<SIZE;i++){
                    if(strcmp(email [i], emailPesquisa)){
                        
                     printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);

                        }
                    }
                     break;
                default:
                   printf("\n Opcao invalida");  
                   break;
                }
                printf("\nDigite 1 para continuar pesquisando");
                scanf("%d", &op);     
         }while(op==1);
}