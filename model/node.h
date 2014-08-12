#ifndef NODE_H_
#define NODE_H_

#include "define.h"

#define MIN_TAP 100
#define MAX_TAP 200
#define MIN_PHI 300
#define MAX_PHI 400

class Node{
private:
  double c;
  double s;
  double sh;
  double tap;
  int type;
  double angle_phi;
  int crt_bar;

  double min_lim_tap;
  double max_lim_tap;
  double min_lim_phi;
  double max_lim_phi;

public:
  Node(double c, double s):
    c(c), s(s), sh(0), tap(1), type(TRANSMISSION_LINE), angle_phi(0), crt_bar(0),
    min_lim_tap(0), max_lim_tap(0), min_lim_phi(0), max_lim_phi(0)
  {};
  Node(double c, double s, double sh):
    c(c), s(s), sh(sh), tap(1), type(TRANSMISSION_LINE), angle_phi(0), crt_bar(0),
    min_lim_tap(0), max_lim_tap(0), min_lim_phi(0), max_lim_phi(0) {};
  Node(double c, double s, double sh, double tap, double angle_phi):
    c(c), s(s), sh(sh), tap(tap), angle_phi(angle_phi), crt_bar(0),
    min_lim_tap(0), max_lim_tap(0), min_lim_phi(0), max_lim_phi(0){};
  Node(double c, double s, double sh, double tap, double angle_phi, int crt_bar, double min_tap, double max_tap, double min_phi, double max_phi):
    c(c), s(s), sh(sh), tap(tap), angle_phi(angle_phi), crt_bar(crt_bar),
    min_lim_tap(min_tap), max_lim_tap(max_tap), min_lim_phi(min_phi), max_lim_phi(max_phi)
  {};
  Node(): c(0), s(0), sh(0), tap(1), type(TRANSMISSION_LINE), angle_phi(0), crt_bar(0) {};

  double GetS();
  double GetC();
  double GetSh();
  double GetTap();
  double GetPhi();
  double GetLim(int var);
  int GetId();
  int GetType();
  int GetBar();

  void SetS(double s);
  void SetC(double c);
  void SetSh(double sh);
  void SetTap(double t);
  void SetPhi(double angle);
  void SetBar(int bar);
  void SetLim(int var, double value);

  bool Exist();
};

#endif /* NODE_H_ */
