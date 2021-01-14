// Copyright 2020 Your Name <your_email>
//
// Created by Илюза Янгирова on 12.01.2021.
//

#ifndef INCLUDE_THREADDATA_HPP_
#define INCLUDE_THREADDATA_HPP_
#include <boost/process.hpp>
#include <iostream>
#include <random>

#include "Parameters.hpp"
struct ThreadData {
    ThreadData() = delete;

    bool isTerminated = false;
    boost::process::child currentProcess;
};
#endif  // INCLUDE_THREADDATA_HPP_
