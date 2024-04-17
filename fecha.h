#ifndef fecha_h
#define fecha_h

typedef struct Fecha {
  int dia;
  int mes;
  int anio;
} Fecha;

typedef struct Fecha* FechaPtr;

FechaPtr crearFecha(int dia, int mes, int anio);
void destruirFecha(Fecha *fecha);

int getDiaFecha(Fecha *fecha);
int getMesFecha(Fecha *fecha);
int getAnioFecha(Fecha *fecha);

void setDiaFecha(Fecha *fecha, int dia);
void setMesFecha(Fecha *fecha, int mes);
void setAnioFecha(Fecha *fecha, int anio);

#endif // fecha_h
