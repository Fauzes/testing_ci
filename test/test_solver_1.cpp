#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Solving_quadratic_equation
#include <boost/test/unit_test.hpp>

#include <iostream>
#include "solving_quadratic_equation.h"

BOOST_AUTO_TEST_SUITE(Solver_test)

BOOST_AUTO_TEST_CASE(solver_1_test)
{
    Solving_quadratic_equation solver;
    BOOST_CHECK(solver.solve(1, 0, 1) == nullptr);
}

BOOST_AUTO_TEST_SUITE_END()
