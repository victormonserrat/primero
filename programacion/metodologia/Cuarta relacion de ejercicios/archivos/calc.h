/* calculadora polaca inversa: calc.h */

#define NUMERO '0'	/* se�al para detecci�n de n�mero */
void push(double);	/* extrae de la pila */
double pop(void);	/* coloca en la pila */
int getop(char[]);
int getch(void);
void ungetch(int);

