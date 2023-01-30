#include<stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int mas [100] [100];

    int n, m;

    
    printf ("n=");
    scanf ("%i", &n);
    printf ("m=");
    scanf ("%i", &m);

    srand (time (NULL) );
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            mas [j] [i] = rand () % 22 + 10;
        }
    }

    printf ("\nrandomnie znacheniya:\n\n");

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf ("%4i", mas [j] [i]);
        }
        printf ("\n");
    }    

    printf ("\nsorted:\n\n");
    bool fl=false;
    for (int i = 0; i < n; i++)
    {
        fl = true;
        while (fl)
        {
            fl = false;
            for (int j = 0; j< m - 1; j++) 
            {
                if (mas [i] [j] > mas [i] [j+1])
                {
                    int q = mas [i] [j];
                    mas [i] [j] = mas [i] [j+1];
                    mas [i] [j+1] = q;
                    fl = true;
                }
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf ("%4i", mas [j] [i]);
        }
        printf ("\n");
    }
    for (int i = 0; i < m; i++)
    {
        int q = mas [i] [0];
        mas [i] [0] = mas [i] [n-1];
        mas [i] [n-1] = q;
    }

	 printf ("\n obmen 1 i poslednim stolbom:\n\n");
	 
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf ("%4i", mas [j] [i]);
        }
	 printf ("\n");
    }
}
