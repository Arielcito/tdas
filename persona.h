#ifndef persona_h
#define persona_h
#include "fecha.h"

typedef struct Persona {
  char nombre[50];
  char apellido[50];
  int dni;
  int edad;
  FechaPtr fechaNacimiento;
} Persona;


typedef struct Persona* PersonaPtr;

PersonaPtr crearPersona(char *nombre, char *apellido, int dni, int edad, FechaPtr fechaNacimiento);
void destruirPersona(Persona *persona);

char *getNombrePersona(Persona *persona);
char *getApellidoPersona(Persona *persona);
int getDniPersona(Persona *persona);
int getEdadPersona(Persona *persona);
FechaPtr getFechaNacimientoPersona(Persona *persona);

void setFechaNacimientoPersona(Persona *persona, Fecha fechaNacimiento);
void setNombrePersona(Persona *persona, char *nombre);
void setApellidoPersona(Persona *persona, char *apellido);
void setDniPersona(Persona *persona, int dni);
void setEdadPersona(Persona *persona, int edad);

#endif // persona
