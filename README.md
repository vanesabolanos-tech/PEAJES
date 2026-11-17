# PEAJES
# Taller Peaje - Segundo Corte
104626011521

## 1. ¿Por qué no se puede crear un objeto de Vehiculo directamente?
La clase `Vehiculo` es abstracta porque contiene métodos virtuales puros (como `cobrar()` y `getTipo()`). No se puede instanciar porque es un concepto general y no tiene una implementación definida para esos métodos, los cuales deben ser implementados por las clases hijas (Carro, Moto.).

## 2. ¿Por qué el destructor de Vehiculo es virtual?
Para asegurar que, cuando se elimine un objeto (ej. un Carro) usando un puntero de la clase base (`delete vehiculo`), se ejecute correctamente el destructor de la clase derivada. Si no fuera virtual, solo se ejecutaría el destructor base, causando fugas de memoria.

## 3. ¿Qué hace el programa si se llama al registro de un paso con un puntero nulo y por qué?
Si se pasa un puntero nulo al método `registrarPaso`, el programa fallaría (segmentation fault) al intentar llamar a `v->cobrar()`. Decidí no validarlo en la Caseta porque el `main` es el único que crea los vehículos y siempre les pasa punteros válidos.