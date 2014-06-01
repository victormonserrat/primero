/*
Un programa de C contiene las siguientes sentencias:

	int i, j = 25;
	int *pi, *pj = &i:
	*pj = j + 5;
	i = *pj + 5:
	pi = pj;
	*pi = i + j;

Si el valor asignado a i empieza en la dirección F9C (hexadecimal) y el valor asignado a j empieza 
en FE9 entonces:

	a) ¿Qué valor es representado por &i? La dirección de memoria 		de la variable de tipo int "i" (F9C).
	b) ¿Qué valor es representado por &j? La dirección de memoria 		de la variable de tipo int "j" (FE9).
	c) ¿Qué valor es asignado a pj? La dirección de memoria de la 		variable de tipo int "i" (FEC).
	d) ¿Qué valor es asignado a *pj? 30.
	e) ¿Qué valor es asignado a i? 35.
	f) ¿Qué valor es representado por pi? Una dirección de memoria.
	g) ¿Qué valor es asignado a *pi? 60.
	h) ¿Qué valor es representado por la expresión (*pi + 2)? El 		contenido de la variable apuntada por el puntero pi + 2.
	*/
