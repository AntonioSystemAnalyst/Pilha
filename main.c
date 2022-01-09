#include <stdio.h>
#include <stdlib.h>

int pop ();
void push (int A);
int size ();
int stackpop ();
int poo ();
int vetor [10];
int start ();

int i, topo = 0, inicio = 0, final = 0, max = 10, Op2, N, W1 = 0, N;
int num = 0;
int N = 0;
int main () {
	
	int W = 0, Op;
	
	do{
		system ("cls");
		printf ("\n ---------------------------");
		printf ("\n Pilha");
		printf ("\n ---------------------------");
        
        for (i=0; i<10; i++)
        {
           printf ("\n [%i] Pilha: %i", i+1, vetor[i]);
		}
        
        
	    printf ("\n ---------------------------");
	    printf ("\n 1 - Push\n 2 - Pop\n 3 - Size\n 4 - StackPop");   
	    printf ("\n ---------------------------");
		printf ("\n Codigo: ");
	    scanf ("%i", &Op);
	    
	    switch (Op)
	    {
	    	case 1:
	    	do{
	    		system ("cls");
		        printf ("\n ---------------------------");
	    	    printf ("\n  Push");
				printf ("\n ---------------------------");
	    		printf ("\n Digite um numero: ");
	    		scanf ("%i", &N);
	    		push (N);
	    		printf ("\n ---------------------------");
	    	    printf ("\n 1 - Voltar");
	    	    printf ("\n ---------------------------");
	    	    printf ("\n Codigo: ");
	    	    scanf ("%i", &Op2);
	    	    
	    	    if (Op2 == 1)
	    	    {
	    	    	W1 = 1;
				}
	    		
			}while (W1 == 0);
			W1 = 0;	
	    	break;
	    	
	    	case 2:
	    	do{
	    		system ("cls");
	    		printf ("\n ---------------------------");
	    		printf ("\n  Push");
	    		printf ("\n ---------------------------");
	    		printf ("\n Digite o numero p/ tirar: ");
	    		scanf ("%i", &N);
	    		
	    		for (i=0; i<N; i++)
	    		{
	    		   num = pop ();
				   if (num != -1)
				   {
				     printf ("\n Numero tirado: %i", num);
				   }	
				}
				printf ("\n ---------------------------");
				printf ("\n 1 - Voltar");
				printf ("\n ---------------------------");
				printf ("\n Codigo: ");
				scanf ("%i", &Op2);
				
				if (Op2 == 1)
				{
					W1 = 1;
				}
	    		
			}while (W1 == 0);
			W1 = 0;
			break;
	    	
	    	case 3:
	    	break;
	    	
	    	case 4:
	    	break;
		}
	
	}while (W == 0);
	return 0;
}

int pop ()
{
	int X;
	
	if ((topo - inicio) == 0)
	{
		printf ("\n Pilha Vazia");
		return  -1;
	}
	else
	{
	   	topo = topo - 1; 
		X = vetor [topo];
		
		return X;
		
	}
}

void push (int A)
{
	int X;
	X = A;
	if (topo == max)
	{
		printf ("\n Pilha cheia");
	}
	else
	{
		vetor [topo] = X;
		topo = topo + 1; 
	}
}

int size ()
{
   int n;
   n = topo;
   return n;	
}

int stackpop ()
{
	int X;
	if ((topo = inicio) == 0)
	{
		printf ("\n Pilha vazia");
	}
	else
	{
		X = vetor [topo];
		return X;
	}
}

int start ()
{
	int i;
	
	for (i=0; i<11; i++)
	{
		vetor [i] = 0;
	}
}
