# Clases de C — Para Adrián
Bienvenido a tu repositorio personal de aprendizaje de **C desde cero**. 🚀  
Aquí se guardan los ejercicios realizados en clase

---

## 📚 Índice de Archivos

| # | Archivo | Tema | Estado |
|---|---------|------|--------|
| 🎲 | [`main.c`](main.c) | Números aleatorios | ✅ |
| 📦 | [`ejercicio1.c`](ejercicio1.c) | Arrays | ✅ |
| 🔤 | [`ejercicio2.c`](ejercicio2.c) | Cadenas de texto | ✅ |
| 🏗️ | [`ejercicio3.c`](ejercicio3.c) | Structs | ✅ |
| 👉 | [`ejercicio4.c`](ejercicio4.c) | Punteros a structs | ✅ |
| 💾 | [`ejercicio5.c`](ejercicio5.c) | Ficheros de texto | ✅ |
| 🔢 | [`ejercicio6.c`](ejercicio6.c) | Matrices | ✅ |

---

## 🎲 `main.c` — Números Aleatorios

**Conceptos clave:** `srand()`, `rand()`, `time.h`, semillas

En este archivo se trabaja la **generación de números aleatorios** en C.  
Se aprende a usar `srand(time(NULL))` para inicializar la semilla con el tiempo real del sistema, evitando que la secuencia sea siempre la misma.

Lo más importante: la fórmula universal para generar un número entre `MIN` y `MAX`:

```c
rand() % (MAX - MIN + 1) + MIN
```

🔹 **Ejercicio 1** → Número aleatorio entre `10` y `20`  
🔹 **Ejercicio 2** → Número aleatorio entre `22` y `43`

---

## 📦 `ejercicio1.c` — Arrays

**Conceptos clave:** declaración explícita/implícita, recorrido con `for`, indexación base-0

Este archivo es una introducción completa al mundo de los **arrays en C**.  
Se practica desde cómo declararlos hasta cómo operar entre ellos.

> ⚠️ Importante recordar: **la primera posición de un array siempre es el índice `0`**

🔹 **Ejercicio 1** → Recorrer un array con un bucle `for`  
🔹 **Ejercicio 2** → Declarar un array de 5 enteros y rellenarlo  
🔹 **Ejercicio 3** → Restar dos arrays elemento a elemento y guardar el resultado en un tercer array  
🔹 **Ejercicio 4** → Acceder a una posición concreta de un array

---

## 🔤 `ejercicio2.c` — Cadenas de Texto

**Conceptos clave:** `char[]`, `strlen()`, `string.h`, tipo `size_t`

Primer contacto con las **cadenas de caracteres** en C.  
Se usa la función `strlen()` de la librería `<string.h>` para medir la longitud de una cadena sin contar el terminador nulo `\0`.

```c
char texto[] = "Hola Pepe";
size_t numeroCaracteres = strlen(texto); // → 9
```

🔹 Se imprime tanto la frase como el número de caracteres que contiene.

---

## 🏗️ `ejercicio3.c` — Structs

**Conceptos clave:** `struct`, campos, instancias, operador `.`

Introducción a las **structs en C**, el equivalente a objetos/clases simples.  
Se aprende a definir un tipo propio con varios campos y a crear instancias de él.

> ⚠️ En una struct **no se pueden inicializar los campos directamente** en la definición, solo se declaran. La inicialización se hace al crear la instancia.

```c
struct Alumno {
    char nombre[50]; // las cadenas requieren tamaño fijo
    int edad;
    float nota;
};

struct Alumno alumno1 = { 18, 8 };  // inicialización al declarar
alumno1.edad = 27;                  // acceso con operador '.'
alumno1.nota = 6.5;
```

🔹 **Ejercicio 1** → Crear un struct `Alumno` con `nombre`, `edad` y `nota`  
🔹 **Ejercicio 2** → Modificar los campos con el operador `.`  
🔹 **Ejercicio 3** → Crear múltiples instancias del mismo struct

---

## 👉 `ejercicio4.c` — Punteros a Structs

**Conceptos clave:** `*`, `&`, `->`, `strcpy()`, `camelCase`

Se trabaja con **punteros que apuntan a structs**.  
El operador `->` permite acceder a los campos del struct a través del puntero.

> ⚠️ **No se puede modificar una cadena con `=` a través de un puntero.**  
> Hay que usar `strcpy()` de `<string.h>` en su lugar.

```c
struct Alumno alumno1 = { "Carlos", 20, 5.5 };
struct Alumno *punteroAlumno1 = &alumno1;

punteroAlumno1->edad = 20;           // ✅ correcto con '->'
punteroAlumno1->nota = 8.4;

// punteroAlumno1->nombre = "Pepito"; // ❌ esto NO se permite
strcpy(punteroAlumno1->nombre, "Pepito"); // ✅ correcto
```

> 💡 Convenio de escritura: las variables usan **camelCase** → `notaMediaDelAlumno`

🔹 **Ejercicio 1** → Crear un puntero a un struct con `*` y `&`  
🔹 **Ejercicio 2** → Modificar campos numéricos con `->`  
🔹 **Ejercicio 3** → Modificar una cadena con `strcpy()`

---

## 💾 `ejercicio5.c` — Ficheros de Texto

**Conceptos clave:** `FILE *`, `fopen()`, `fprintf()`, `fclose()`, modos `"r"` y `"w"`

Se aprende a **escribir datos en un archivo `.txt`** desde C.  
Se usa un array de structs para guardar varios alumnos y volcarlos al fichero con `fprintf()`.

> ⚠️ **Siempre hay que cerrar el fichero** con `fclose()` al terminar. Si no se cierra, los datos pueden no guardarse correctamente.

```c
FILE *f = fopen("alumnos.txt", "w"); // 'w' escritura, 'r' lectura
if (f == NULL) {
    printf("Error al crear el archivo\n");
    return 1;
}
for (int i = 0; i < 3; i++) {
    fprintf(f, "Nombre: %s, edad: %d, nota: %.1f\n",
            alumnos[i].nombre, alumnos[i].edad, alumnos[i].nota);
}
fclose(f); // obligatorio
```

> 💡 `fprintf()` es igual que `printf()` pero el primer parámetro es el fichero donde escribir.

🔹 **Ejercicio 1** → Crear 3 instancias de `Alumno` y meterlas en un array  
🔹 **Ejercicio 2** → Abrir un fichero en modo escritura con control de error  
🔹 **Ejercicio 3** → Escribir los datos con `fprintf()` y cerrar con `fclose()`

---

## 🔢 `ejercicio6.c` — Matrices

**Conceptos clave:** `matriz[i][j]`, doble bucle `for`, índices fila/columna

Se trabaja con **matrices bidimensionales** en C: cómo declararlas, recorrerlas y operar entre ellas.

> 💡 `matriz[i][j]` → `i` es la **fila**, `j` es la **columna**

```c
int matriz[3][3] = {
    {1, 2, 3},   // fila 0
    {4, 5, 6},   // fila 1
    {7, 8, 9}    // fila 2
};

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}
```

Para **sumar dos matrices**, se recorren celda a celda y se suma la posición `[i][j]` de cada una:

```c
resultado[i][j] = a[i][j] + b[i][j];
```

🔹 **Ejercicio 1** → Declarar una matriz 3x3 y mostrarla por pantalla  
🔹 **Ejercicio 2** → Sumar dos matrices 3x3 y guardar el resultado en una tercera

---

## 🛠️ Cómo compilar y ejecutar

```bash
# Compilar
gcc main.c -o main
# Ejecutar
./main
```

---

## 🗺️ Roadmap de aprendizaje

- [x] Variables y tipos básicos
- [x] Números aleatorios
- [x] Arrays
- [x] Cadenas de texto (`strlen`)
- [x] Structs
- [x] Punteros a structs
- [x] Matrices
- [x] Ficheros

---

<div align="center">

**Hecho con 💙 y mucho `printf`**  
`gcc` • `C99` • aprendiendo de verdad

</div>
