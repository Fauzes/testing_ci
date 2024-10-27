#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Solving_quadratic_equation
#include <boost/test/unit_test.hpp>

#include <iostream>
#include "solving_quadratic_equation.h"

BOOST_AUTO_TEST_SUITE(Solver_test)

BOOST_AUTO_TEST_CASE(solver_5_test)
{
    Solving_quadratic_equation solver;
    double* roots;
    roots = solver.solve(0.1, 0.9, 2);
    BOOST_CHECK_EQUAL(roots[0], -4.5);
    BOOST_CHECK_EQUAL(roots[1], -4.5);
}

BOOST_AUTO_TEST_SUITE_END()
