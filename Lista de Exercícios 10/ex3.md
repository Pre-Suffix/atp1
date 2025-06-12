# Exercício 3
> Encontre o erro em cada um dos segmentos de programa a seguir.

## A
```cpp
    int *number;
    printf("%d\n", *number);
```
O ponteiro number aponta para um valor não inicializado.

## B
```cpp
    float *realPtr;
    long *integerPtr;
    integerPtr = realPtr;
```
Você não pode definir um ponteiro de long para o valor de um ponteiro de float sem converter.

## C
```cpp
    int *x, y;
    x = y;
```
Para definir o valor de x, você precisa primeiro deferenciá-lo.

## D
```cpp
    char s[] = "um array de caracteres";
    int count;
    for(; *s != '\0'; s++)
        printf("%c", *s);
```
O int count foi inicializado e não foi utilizado, mesmo que deveria ter sido ao invés do s que foi usado incorretamente no laço for. Um código correto seria:
```cpp
    char s[] = "um array de caracteres";
    int count = 0;
    for(; *(&s[0] + count) != '\0'; count++)
        printf("%c", *(&s[0] + count));
```

## E
```cpp
    short *numPtr, result;
    void *genericPtr = numPtr;
    result = *genericPtr + 7;
```
Você não pode dereferenciar um ponteiro de void sem antes definir seu tipo.

## F
```cpp
    float x = 19.34;
    float xPtr = &x;
    printf("%f\n", xPtr);
```
A variável "xPtr" foi definida como float, e não como ponteiro de float. Além disso, a função printf assume como entrada o valor, e não um ponteiro para o valor.

## G
```cpp
    char *s;
    printf("%s\n", s);
```
A função printf assume como entrada o valor, e não um ponteiro para o valor. Além disso, a variável s não foi definida.