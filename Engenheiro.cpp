#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado
{

public:
  int get_projetos()
  {
    return projetos;
  }
  void set_projetos(int _projetos)
  {
    projetos = _projetos;
  }

private:
  int projetos;
};
