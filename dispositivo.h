#ifndef dispositivo_h
#define dispositivo_h

#include "persona.h"
typedef struct Dispositivo {
  char tipo[50];
  char marca[50];
  float precio;
  int memoria;
  PersonaPtr duenio;
} Dispositivo;

typedef struct Dispositivo* DispositivoPtr;

DispositivoPtr crearDispositivo(char *tipo, char *marca, float precio, int memoria,PersonaPtr duenio);
void destruirDispositivo(Dispositivo *dispositivo);

char *getTipoDispositivo(Dispositivo *dispositivo);
char *getMarcaDispositivo(Dispositivo *dispositivo);
float getPrecioDispositivo(Dispositivo *dispositivo);
int getMemoriaDispositivo(Dispositivo *dispositivo);

void setTipoDispositivo(Dispositivo *dispositivo, char *tipo);
void setMarcaDispositivo(Dispositivo *dispositivo, char *marca);
void setPrecioDispositivo(Dispositivo *dispositivo, float precio);
void setMemoriaDispositivo(Dispositivo *dispositivo, int memoria);
#endif // dispositivo
