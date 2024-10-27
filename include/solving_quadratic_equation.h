#ifndef __SOLVING_QUADRATIC_EQUATION__
#define __SOLVING_QUADRATIC_EQUATION__

class Solving_quadratic_equation
{
private:
    double x[2];
    double epsilon;
public:
    Solving_quadratic_equation();
    ~Solving_quadratic_equation();

    double* solve(double a, double b, double c);
};
#endif
