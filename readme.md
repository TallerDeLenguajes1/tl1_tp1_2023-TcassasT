# Taller de lenguajes 1 (2023) - TcassasT
**1** `.gitignore`
   1. El archivo`.gitignore` nos sirve para evitar el versionado innecesario de ciertos archivos o directorios. Por ej: directorios con archivos temporales, archivos de configuración con datos sensibles, veriones compiladas de archivos, etc.
   2. El uso del archivo `.gitignore` no es obligatorio, pero si es recomendado utilizarlo. Puede ser creado en cualquier momento, no necesariamente durante el setup del proyecto.
   3. La sintaxis utilizada en un archivo `.gitignore` para ignorar archivos o directorios es: cada linea del archivo puede contener el nombre de un archivo/directorio en especifico, y además se pueden utilizar wildcards para especificar cosas como: ignorar archivos con cierta extensión, que estén dentro de una carpeta, etc.
----------

**3** g) El resultado del apartado 2 y 3 dan como resultado la misma dirección de memoria ya que:
- 2 imprime la dirección de memoria a la que está apuntando
- 3 imprime la dirección de memoria de una variable

**x** Y como 2) apunta a la dirección de memoria de 3), al imprimir el contenido de 2) obtenemos la dirección de memoria de 3), y al imprimir la dirección de memoria de 3) obtenemos... su dirección de memoria.
