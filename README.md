# Calcular-IMC
IMC funcion.cpp es un programa en C++ que calcula el Índice de Masa Corporal (IMC) a partir del peso, la estatura y el género del usuario, y guarda su nombre en un archivo .txt según el resultado obtenido

# ⚖️ Calculadora de IMC con Registro en Archivos en C++

Programa de consola escrito en **C++** que calcula el **Índice de Masa Corporal (IMC)** según el género del usuario y guarda su registro en archivos de texto planos según su estado de masa corporal[cite: 5].

---

## 📌 Características

* **Cálculo de IMC:** Aplica la fórmula estándar utilizando peso ($\text{kg}$) y estatura ($\text{m}$)[cite: 5].
* **Diferenciación por Género:** Evalúa las escalas de IMC diferenciando los rangos para hombres y mujeres[cite: 5].
* **Persistencia en Archivos:** Registra automáticamente el nombre del usuario en archivos `.txt` según la clasificación obtenida (`peso_bajo.txt`, `peso_normal.txt`, `sobrepeso.txt`)[cite: 5].

---

## 📁 Archivos Generados por el Programa

* `peso_bajo.txt`: Guarda los nombres de los usuarios con IMC bajo[cite: 5].
* `peso_normal.txt`: Guarda los nombres de los usuarios con IMC normal[cite: 5].
* `sobrepeso.txt`: Guarda los nombres de los usuarios con sobrepeso[cite: 5].

---

## 🛠️ Requisitos e Instalación

### Requisitos Previos
* Compilador de C/C++ como **GCC / MinGW**, **Clang** o un IDE como **Dev-C++** o **Code::Blocks**[cite: 5].

### Compilación y Ejecución

1. **Compilar el archivo:**
   ```bash
   g++ "IMC funcion.cpp" -o IMC
