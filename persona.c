#include "persona.h"
#include "dispositivo.h"
#include "fecha.h"
Persona *crearPersona(char *nombre, char *apellido, int dni, int edad, FechaPtr fecha) {
  // Crear una nueva persona
  Persona *nueva = malloc(sizeof(Persona));
  strcpy(nueva->nombre, nombre);
  strcpy(nueva->apellido, apellido);
  nueva->dni = dni;
  nueva->edad = edad;
  nueva->fechaNacimiento = fecha;

  return nueva;
}

void destruirPersona(Persona *persona) {
  free(persona);
}

char *getNombrePersona(Persona *persona) {
  return persona->nombre;
}

char *getApellidoPersona(Persona *persona) {
  return persona->apellido;
}

int getDniPersona(Persona *persona) {
  return persona->dni;
}

int getEdadPersona(Persona *persona) {
  return persona->edad;
}
FechaPtr getFechaNacimientoPersona(Persona *persona){
    return persona->fechaNacimiento;
}

void setNombrePersona(Persona *persona, char *nombre) {
  strcpy(persona->nombre, nombre);
}

void setApellidoPersona(Persona *persona, char *apellido) {
  strcpy(persona->apellido, apellido);
}

void setDniPersona(Persona *persona, int dni) {
  persona->dni = dni;
}

void setEdadPersona(Persona *persona, int edad) {
  persona->edad = edad;
}

void mostrarPersona(PersonaPtr persona) {
  printf("**Persona:**\n");
  printf("Nombre: %s %s\n", getNombrePersona(persona), getApellidoPersona(persona));
  printf("DNI: %d\n", getDniPersona(persona));
  printf("Edad: %d años\n", getEdadPersona(persona));
}
