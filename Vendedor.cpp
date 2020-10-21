#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado
{
private:
	double quotaMensalVendas;

public:
	double quotaTotalAnual()
	{
		return get_quotaMensalVendas() * 12;
	}

	double get_quotaMensalVendas()
	{
		return quotaMensalVendas;
	}
	void set_quotaMensalVendas(double value)
	{
		quotaMensalVendas = value;
	}
};

// atributos nas classes erradas: movi nome para a classe de empredados e quotaMensalVendas para a Classe vendedor
// tornei todos os atributos privados e criei métodos para acessá-los e outros para modificar os seus valores.