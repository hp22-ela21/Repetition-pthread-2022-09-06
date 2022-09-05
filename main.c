/********************************************************************************
* main.c: Tv� tr�dar skall anv�ndas f�r att uppdatera inneh�llet i en statisk
*         array vid inmatning av godtycklig text fr�n tangentbordet samt f�r
*         att skriva ut arrayens inneh�ll var femte sekund. Slutf�r programmet
*         och se till att det fungerar som specificerat.
*
*         I Linux, kompilera programmet och skapa en k�rbar fil main via
*         f�ljande kommando:
*         $ gcc main.c -o main -Wall -l gpiod
*
*         K�r sedan programmet via f�ljande kommando:
*         $ ./main.c
********************************************************************************/
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

/********************************************************************************
* double_array: Strukt f�r statisk array av valfri storlek f�r lagring av
*               flyttal.
********************************************************************************/
struct double_array
{
   double* const data; /* Pekare till statisk array. */
   const size_t size;  /* Arrayens storlek, dvs. antalet element den rymmer. */
};

/********************************************************************************
* readline: L�ser in text fr�n tangentbordet och lagrar i en str�ng av angiven
*           storlek. Maximalt s� m�nga tecken som str�ngen rymmer matas in.
*           Det nyradstecken som uppkommer vid nedtryckning av ENTER-tangenten
*           tas bort genom att ers�ttas med ett nolltecken.
*
*           - s   : Pekare till str�ngen d�r inmatat text skall lagras.
*           - size: Str�ngens storlek, dvs. antalet tecken den rymmer.
********************************************************************************/
void readline(char* s,
              const size_t size)
{
   fgets(s, (int)sizeof(s), stdin);
   printf("\n");

   for (char* i = s; *i; ++i)
   {
      if (*i == '\n')
      {
         *i = '\0';
      }
   }

   return;
}

/********************************************************************************
* thread_read: Tr�d f�r att uppdatera inneh�llet i angiven flyttalsarray vid 
*              inmatning av text. I denna tr�d sker kontinuerligt inv�ntan p� 
*              n�sta inmatning.
* 
*              Vid inmatning fylls arrayen till bredden med nya flyttal, d�r
*              steghastigheten 0.5 anv�nds. Som exempel, en array som rymmer
*              tio flyttal fylls f�rsta g�ngen med tal 0.0, 0.5...4,0. 4.5.
*              Vid n�sta inmatning fylls arrayen i st�llet med tal 5.0, 5.5,
*              6.0...9.0, 9.5.
* 
*              - arg: Voidpekare till array inneh�llande flyttal.
********************************************************************************/
static void* thread_read(void* arg)
{
   return 0;
}

/********************************************************************************
* thread_print: Tr�d f�r att skriva ut inneh�llet lagrat i angiven 
*               flyttalsarray var tredje sekund. Utskrift sker i terminalen.
*
*              - arg: Voidpekare till array inneh�llande flyttal.
********************************************************************************/
static void* thread_print(void* arg)
{
   return 0;
}

/********************************************************************************
* main: Deklarerar en statisk array med utrymme f�r 20 flyttal, som initieras
*       med startv�rdet 0.0. Tv� tr�dar implementeras f�r att uppdatera arrayens
*       inneh�ll via inmatning samt utskrift av arrayens inneh�ll var femte
*       sekund. Programmet exekverar kontinuerligt.
********************************************************************************/
int main(void)
{
   return 0;
}