#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

#define MAXHORASTRABALHADAS = 8
class Empregado
{

public:
  double pagamentoMes(double horasTrabalhadas)
  {

    double t = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > MAXHORASTRABALHADAS)
    {
      double x = horasTrabalhadas - MAXHORASTRABALHADAS;
      t += x / 2;
    }
    return t * salarioHora;
  }
  double get_salarioHora()
  {
    return salarioHora;
  }
  void set_salarioHora(double _salarioHora)
  {
    salarioHora = _salarioHora;
  }
  std::string get_nome()
  {
    return nome;
  }
  void set_nome(std::string _nome)
  {
    nome = _nome;
  }

private:
  double salarioHora;
  std::string nome;
};

#endif