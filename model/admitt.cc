#include "admitt.h"

void Admitt::SetR(double r) {
  this->r = r;
}

void Admitt::SetX(double x) {
  this->r = x;
}

void Admitt::SetSh(double sh) {
  this->sh = sh;
}

double Admitt::GetR() {
  return r;
}

double Admitt::GetX() {
  return x;
}

double Admitt::GetSh() {
  return sh;
}