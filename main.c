#include <stdio.h>
#include <stdlib.h>
#include "dispositivo.h"
#include "persona.h"
#include "empleado.h"
#include "fecha.h"

int main()
{
    // Crear una persona
    FechaPtr fechaNacimiento = crearFecha(15, 4, 1980);

    PersonaPtr miPersona = crearPersona("Juan", "Perez", 12345678, 25,fechaNacimiento);
    EmpleadoPtr empleado = crearEmpleado(miPersona, 1,100000,"Accenture");

    // Agregar algunos dispositivos a la persona
    DispositivoPtr celular = crearDispositivo("Celular", "Samsung", 50000.0, 128,miPersona);
    DispositivoPtr computadora = crearDispositivo("Computadora", "Lenovo", 80000.0, 512,miPersona);

    mostrarDispositivo(celular);
    mostrarDispositivo(computadora);
    mostrarPersona(miPersona);
    printf("**Empleado:**\n");
    printf("Legajo: %d\n", getLegajoEmpleado(empleado));
    printf("Sueldo: %f\n", getSueldoEmpleado(empleado));
    printf("Empresa: %s\n", getEmpresaEmpleado(empleado));
    destruirPersona(miPersona);

    return 0;
}
