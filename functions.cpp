#include <iostream>

using namespace std;

int fatorial(int n)
{
   if(n == 0)
       return 1;

   return (n)*fatorial(n-1);
}

void manipularStrings()
{
    char nome[] = "Ivo Pontes";

    if(isdigit(nome[0]))
        cout << "É um número." << endl;
    else
        cout << "É uma letra." << endl;

    cout << endl;

    if(isupper(nome[0]))
        cout << nome[0] << " é maiúscula." << endl;

    if(islower(nome[1]))
        cout << nome[1] << " é minúscula." << endl;

    cout << endl;

    if(isspace(nome[3]))
        cout << "\'" << nome[3] << "\'" << " é espaço ou tabulação." << endl << endl;

    char input[100];

    cout << "Digite seu nome: ";
    cin >> input;

    cout << "Nome: " << input << endl;
}

