//==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8
//
// FILE-NAME := [[ "boost-test-lambda.cpp" ]]
// FILE-PATH := [[ "~/Dropbox/DFPHD-800-SWDEV/800-SWDEV-BOOST/test-lambda" ]]
//
// This C++ program is the official test of the initial Boost installation.
// It uses Boost::Lambda to echo INTEGERS into the program and using lambda
// expressions, echos some combination of those integers to stdout.
//
// See MAKEFILE for details on compile, link, execute.
//
// [[ DFPHD :: SWDEV@HOME - BOOST test and build :: 2012-11-17 ]]
//
//==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::flush;

#include <iterator>

#include <algorithm>

#include "boost/lambda/lambda.hpp"

//==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8

int main( int argc , char* argv[] )
{
    using namespace boost::lambda;

    // echo INTEGERS into the program ...
    typedef std::istream_iterator<int> in;

    cout << endl;
    cout << "<<< --- [[ " << argv[0] << " ]] --- BEGIN" << endl;

    cout << ">>> SIMPLE TEST FOR BOOST \"lambda\" EXPRESSIONS ..." << endl;

    cout << ">>> RUNNING BOOST LAMBDA THRU \"for_each\" ITERATION ..." << endl;

    // IT LOOKS LIKE THE TRAILING SPACE (BELOW) IS CRITICAL ???
    // std::for_each( in(cin) , in() , cout << (_1 * 3) << std::endl );
    cout << ">>> for_each using lambda expressions: [[ ";
       std::for_each( in(cin) , in() , cout << (_1 * 3) << " " );
    cout << "]]" << endl;

    cout << "<<< --- [[ " << argv[0] << " ]] --- END" << endl;
    cout << endl;


}

//==+====1====+====2====+====3====+====4====+====5====+====6====+====7====+====8
