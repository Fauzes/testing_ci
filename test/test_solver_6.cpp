#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Solving_quadratic_equation
#include <boost/test/unit_test.hpp>
#include <boost/test/floating_point_comparison.hpp>

#include <iostream>
#include <math.h>
#include "solving_quadratic_equation.h"

BOOST_AUTO_TEST_SUITE(Solver_test)

BOOST_AUTO_TEST_CASE(solver_4_test)
{
    Solving_quadratic_equation solver;
    BOOST_CHECK_THROW(solver.solve(nan("d"), 2, 1), std::invalid_argument);
    BOOST_CHECK_THROW(solver.solve(2, nan("d"), 1), std::invalid_argument);
    BOOST_CHECK_THROW(solver.solve(2, 2, nan("d")), std::invalid_argument);

    BOOST_CHECK_THROW(solver.solve(INFINITY, 2, 1), std::invalid_argument);
    BOOST_CHECK_THROW(solver.solve(2, INFINITY, 1), std::invalid_argument);
    BOOST_CHECK_THROW(solver.solve(2, 2, INFINITY), std::invalid_argument);
}

BOOST_AUTO_TEST_SUITE_END()
