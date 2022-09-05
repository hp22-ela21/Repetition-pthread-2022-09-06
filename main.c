/********************************************************************************
* main.c: Två trådar skall användas för att uppdatera innehållet i en statisk
*         array vid inmatning av godtycklig text från tangentbordet samt för
*         att skriva ut arrayens innehåll var femte sekund. Slutför programmet
*         och se till att det fungerar som specificerat.
*
*         I Linux, kompilera programmet och skapa en körbar fil main via
*         följande kommando:
*         $ gcc main.c -o main -Wall -l gpiod
*
*         Kör sedan programmet via följande kommando:
*         $ ./main.c
********************************************************************************/
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

/********************************************************************************
* double_array: Strukt för statisk array av valfri storlek för lagring av
*               flyttal.
********************************************************************************/
struct double_array
{
   double* const data; /* Pekare till statisk array. */
   const size_t size;  /* Arrayens storlek, dvs. antalet element den rymmer. */
};

/********************************************************************************
* readline: Läser in text från tangentbordet och lagrar i en sträng av angiven
*           storlek. Maximalt så många tecken som strängen rymmer matas in.
*           Det nyradstecken som uppkommer vid nedtryckning av ENTER-tangenten
*           tas bort genom att ersättas med ett nolltecken.
*
*           - s   : Pekare till strängen där inmatat text skall lagras.
*           - size: Strängens storlek, dvs. antalet tecken den rymmer.
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
* thread_read: Tråd för att uppdatera innehållet i angiven flyttalsarray vid 
*              inmatning av text. I denna tråd sker kontinuerligt inväntan på 
*              nästa inmatning.
* 
*              Vid inmatning fylls arrayen till bredden med nya flyttal, där
*              steghastigheten 0.5 används. Som exempel, en array som rymmer
*              tio flyttal fylls första gången med tal 0.0, 0.5...4,0. 4.5.
*              Vid nästa inmatning fylls arrayen i stället med tal 5.0, 5.5,
*              6.0...9.0, 9.5.
* 
*              - arg: Voidpekare till array innehållande flyttal.
********************************************************************************/
static void* thread_read(void* arg)
{
   return 0;
}

/********************************************************************************
* thread_print: Tråd för att skriva ut innehållet lagrat i angiven 
*               flyttalsarray var tredje sekund. Utskrift sker i terminalen.
*
*              - arg: Voidpekare till array innehållande flyttal.
********************************************************************************/
static void* thread_print(void* arg)
{
   return 0;
}

/********************************************************************************
* main: Deklarerar en statisk array med utrymme för 20 flyttal, som initieras
*       med startvärdet 0.0. Två trådar implementeras för att uppdatera arrayens
*       innehåll via inmatning samt utskrift av arrayens innehåll var femte
*       sekund. Programmet exekverar kontinuerligt.
********************************************************************************/
int main(void)
{
   return 0;
}