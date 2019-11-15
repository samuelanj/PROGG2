#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


using namespace std;

void  CadastroEmpresa();
void  CadastroAluno();

typedef struct CadastrarEmpresa CadEMP;

 struct CadastrarEmpresa{
    string NomeEmpresa;
    string BairroDaEmpresa;
    double cnpj;
    int NumeroDaEmpresa;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a;
    cout << "  Dados dos Egressos  " << endl;
    cout << "1- Cadastro Aluno(a).." << endl;
    cout << "2- Cadastro Empresa..." << endl;
    cout << "3- Lista de Formados.." << endl;
    cout << "4- Lista Estagiário..." << endl;
    cout << "5- Gráfico para ver as areas " << endl;
    cin >> a;

    switch (a){
        case 1:
            CadastroAluno();
            break;
        case 2:
            CadastroEmpresa();
    }

    return 0;
}

void  CadastroAluno(){
    char nomeDoAluno;
    int dataDeIngresso , estAtual;
    cout << "**ALUNO**" << endl;
    cout << "Digite seu nome: " << endl;
    cin >> nomeDoAluno;
    cout << "Informe data de igresso na Universidade: " << endl;
    cin >> dataDeIngresso;
    cout << "Estado atual: " << endl;
    cin >> estAtual;
    //Caso formado ou caso ainda estudando;

}

void  CadastroEmpresa(){

     CadEMP stc;
    char resp;
    FILE *file;
    file = fopen("C:\\Users\\Samuel\\Desktop\\Empresa.txt","r+");

    if(file == NULL){
        printf("Impossível abrir o arquivo.");
        exit(0);
    } else{

        do{
           fflush(stdin);
           cout << "Informe nome da empresa: " << endl;
           cin >> stc.NomeEmpresa;
           fprintf(file,"%s\n",stc.NomeEmpresa);

           cout << "Deseja continuar:[s/n]" << endl;
           cin >> resp;
        }while(resp == 's');
       
    }
}
