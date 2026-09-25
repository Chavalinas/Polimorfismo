#include <iostream>
#include <string>

using namespace std;

class Empleado
{
public:
        string nombre;
        virtual double salario() const = 0;

        Empleado(string nombre);
        virtual ~Empleado() {};

};

class Asalariado : public Empleado
{
    int salario;
    public:
        double salario() const override { return salario; }
};

class PorHoras : public Empleado
{
    int horas;
    int por_hora = 30;
    public:
        double salario() const override { return horas * 30; }
};

class Comisionista : public Empleado
{
    int precio, num_trabajo;
    public:
        double salario() const override { return precio * num_trabajo; }
};
