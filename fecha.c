#include "fecha.h"

FechaPtr crearFecha(int dia, int mes, int anio) {
    FechaPtr nuevaFecha = malloc(sizeof(Fecha));

  nuevaFecha->dia = dia;
  nuevaFecha->mes = mes;
  nuevaFecha->anio = anio;

  return nuevaFecha;
}

void destruirFecha(Fecha *fecha) {
  // No hay memoria dinámica que liberar en una Fecha simple.
}

int getDiaFecha(Fecha *fecha) {
  return fecha->dia;
}

int getMesFecha(Fecha *fecha) {
  return fecha->mes;
}

int getAnioFecha(Fecha *fecha) {
  return fecha->anio;
}

void setDiaFecha(Fecha *fecha, int dia) {
  fecha->dia = dia;
}

void setMesFecha(Fecha *fecha, int mes) {
  fecha->mes = mes;
}

void setAnioFecha(Fecha *fecha, int anio) {
  fecha->anio = anio;
}

