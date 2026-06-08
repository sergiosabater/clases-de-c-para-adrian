# Clases de C — Para Adrián

Bienvenido a tu repositorio personal de aprendizaje de **C desde cero**. 🚀  
Aquí se guardan los ejercicios realizados en clase

---

## 📚 Índice de Archivos

| # | Archivo | Tema | Estado |
|---|---------|------|--------|
| 🎲 | [`main.c`](#-mainc--números-aleatorios) | Números aleatorios | ✅ |
| 📦 | [`ejercicio1.c`](#-ejercicio1c--arrays) | Arrays | ✅ |
| 🔤 | [`ejercicio2.c`](#-ejercicio2c--cadenas-de-texto) | Cadenas de texto | ✅ |

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
- [ ] Matrices
- [ ] Funciones
- [ ] Ficheros

---

<div align="center">

**Hecho con 💙 y mucho `printf`**  
`gcc` • `C99` • aprendiendo de verdad

</div>
