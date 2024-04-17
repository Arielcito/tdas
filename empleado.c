
#include "empleado.h"

EmpleadoPtr crearEmpleado(PersonaPtr persona, int legajo, float sueldo, char *empresa) {
  EmpleadoPtr nuevoEmpleado = malloc(sizeof(Empleado));

  nuevoEmpleado->persona = persona;
  // Inicializar la parte Empleado
  nuevoEmpleado->legajo = legajo;
  nuevoEmpleado->sueldo = sueldo;
  strcpy(nuevoEmpleado->empresa, empresa);

  return nuevoEmpleado;
}

void destruirEmpleado(EmpleadoPtr empleado) {
  // No se necesita liberar la memoria de la parte Persona, ya que es gestionada por Persona.c
  free(empleado);
}


PersonaPtr getPersonaEmpleado(EmpleadoPtr empleado) {
  return &empleado->persona;
}

int getLegajoEmpleado(EmpleadoPtr empleado) {
  return empleado->legajo;
}

float getSueldoEmpleado(EmpleadoPtr empleado) {
  return empleado->sueldo;
}

char *getEmpresaEmpleado(EmpleadoPtr empleado) {
  return empleado->empresa;
}

void setLegajoEmpleado(EmpleadoPtr empleado, int legajo) {
  empleado->legajo = legajo;
}

void setSueldoEmpleado(EmpleadoPtr empleado, float sueldo) {
  empleado->sueldo = sueldo;
}

void setEmpresaEmpleado(EmpleadoPtr empleado, char *empresa) {
  strcpy(empleado->empresa, empresa);
}

void mostrarEmpleado(EmpleadoPtr empleado) {
  printf("**Empleado:**\n");
  printf("Legajo: %d\n", getLegajoEmpleado(empleado));
  printf("Sueldo: %f\n", getSueldoEmpleado(empleado));
  printf("Empresa: %s\n", getEmpresaEmpleado(empleado));
}
