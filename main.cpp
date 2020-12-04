#include <iostream>
#include <fstream>
#define MAX_N 1000
#define MAX_NOME 100

using namespace std;

void lerDados(int n, int distancia[][MAX_N], char cidade[])
{
    ifstream entrada("dados.txt");
    if(entrada.is_open())
    {
        entrada >> n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                entrada >> distancia[i][j];
            }
        }
        entrada.ignore();
        for(int i=0; i<n; i++)
        {
            entrada.getline(cidade[i], MAX_NOME);
        }
        entrada.close();
    }
}

int maisProxima(int n, int distancia[][MAX_N], char cidade[])
{
    menor = distancia[0][]

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(distancia[0][j] < distancia[0][j+1] && distancia[0][j] != 0)
            {
                menor = distancia[0][j];
                indice = j;
            }
        }
    }
}

int main()
{
    int n, , menor, indice=0;
    double distancia[MAX_N][MAX_N]
    char cidade[MAX_N];

    lerDados(n, distancia, cidade);



    return 0;
}
