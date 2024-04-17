#include "dispositivo.h"
#include <stddef.h>  // For NULL macro
DispositivoPtr crearDispositivo(char *tipo, char *marca, float precio, int memoria, PersonaPtr duenio) {
  Dispositivo *nuevo = malloc(sizeof(Dispositivo));
  strcpy(nuevo->tipo, tipo);
  strcpy(nuevo->marca, marca);
  nuevo->precio = precio;
  nuevo->memoria = memoria;
    nuevo->duenio = duenio;
  return nuevo;
}
void destruirDispositivo(Dispositivo *dispositivo) {
  free(dispositivo);
}

char *getTipoDispositivo(Dispositivo *dispositivo) {
  return dispositivo->tipo;
}

char *getMarcaDispositivo(Dispositivo *dispositivo) {
  return dispositivo->marca;
}

float getPrecioDispositivo(Dispositivo *dispositivo) {
  return dispositivo->precio;
}

int getMemoriaDispositivo(Dispositivo *dispositivo) {
  return dispositivo->memoria;
}

void setTipoDispositivo(Dispositivo *dispositivo, char *tipo) {
  strcpy(dispositivo->tipo, tipo);
}

void setMarcaDispositivo(Dispositivo *dispositivo, char *marca) {
  strcpy(dispositivo->marca, marca);
}

void setPrecioDispositivo(Dispositivo *dispositivo, float precio) {
  dispositivo->precio = precio;
}

void setMemoriaDispositivo(Dispositivo *dispositivo, int memoria) {
  dispositivo->memoria = memoria;
}

void mostrarDispositivo(Dispositivo *dispositivo) {
  printf("**Dispositivo:**\n");
  printf("Tipo: %s\n", getTipoDispositivo(dispositivo));
  printf("Marca: %s\n", getMarcaDispositivo(dispositivo));
  printf("Precio: $%.2f\n", getPrecioDispositivo(dispositivo));
  printf("Memoria: %d GB\n", getMemoriaDispositivo(dispositivo));

  // Mostrar información del dueño (si existe)
  if (dispositivo->duenio != NULL) {
    printf("Dueño: %s %s\n", getNombrePersona(dispositivo->duenio), getApellidoPersona(dispositivo->duenio));
  } else {
    printf("Dueño: Sin asignar\n");
  }
}
