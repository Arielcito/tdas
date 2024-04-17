#ifndef empleado_h
#define empleado_h

#include "persona.h"

typedef struct Empleado {
  PersonaPtr persona;  // Hereda de Persona
  int legajo;
  float sueldo;
  char empresa[50];
} Empleado;

typedef struct Empleado* EmpleadoPtr;

EmpleadoPtr crearEmpleado(PersonaPtr persona, int legajo, float sueldo, char *empresa);
void destruirEmpleado(EmpleadoPtr empleado);

PersonaPtr getPersonaEmpleado(EmpleadoPtr empleado);
int getLegajoEmpleado(EmpleadoPtr empleado);
float getSueldoEmpleado(EmpleadoPtr empleado);
char *getEmpresaEmpleado(EmpleadoPtr empleado);

void setLegajoEmpleado(EmpleadoPtr empleado, int legajo);
void setSueldoEmpleado(EmpleadoPtr empleado, float sueldo);
void setEmpresaEmpleado(EmpleadoPtr empleado, char *empresa);

void mostrarEmpleado(EmpleadoPtr empleado);
#endif // empleado_h

