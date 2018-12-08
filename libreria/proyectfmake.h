//En esta librería declaramos todas las funciones que necesitamos para que el programa corra de manera correcta.
long double distancia(long double x1,long double x2);
long double fuerza(long double r,long double x,long double m);//Para calcular la fuerza, declaramos una función tipo flotante, que tiene como argumentos la masa, el vector de distancia "r" y la distancia x entre las partículas con las que interactúa.
long double velocidad(long double vxp,long double fxp,long double fxt,long double h);//Para el caso de la velocidad, los argumentos necesarios en la función fueron la velocidad de la iteración pasada (es decir, la velocidad en el instante anterior de una partícula afectada por las fuerzas de las demás), la fuerza en un instante pasado, la fuerza en el instante actual(es decir, la fuerza que está sintiendo en la iteración actual) y finalmente nuestro parámetro h, que sirve para poder realizar las iteraciones necesarias, que tienen como propósito generar muchos datos, que a su vez nos permitan observar la evolución del sistema de manera gradual.
long double posicion(long double xp,long double h,long double vxp,long double fxp);//Para la función posición, requerimos la posición de la partícula en un instante pasado, el parámetro h(anteriormente explicado), la velocidad en un instante pasado(la cual en la primera iteración es la que se lee de los datos iniciales de velocidad), y finalmente la fuerza que siente en un instante pasado.
long double distanciat(long double dx,long double dy,long double dz);//Para poder calcular la fuerza de manera correcta, necesitamos saber la distancia exacta entre todas las partículas en cada eje coordenadao, por lo que la función "distanciat" tiene como argumentos las distancias entre cada partícula en cada eje, para así poder calcular la fuerza como un vector en cada eje coordenado, logrando así una correcta sumatoria de las fuerzas que son ejercidas en la j-ésima partícula en cada eje. 


