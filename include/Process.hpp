// Copyright 2020 Your Name <your_email>
//
// Created by Илюза Янгирова on 12.01.2021.
//

#ifndef INCLUDE_PROCESS_HPP_
#define INCLUDE_PROCESS_HPP_

#include <boost/process.hpp>
#include <chrono>
#include <list>
#include <memory>
#include <sstream>
#include <string>

#include "Builder.hpp"
#include "Parameters.hpp"
#include "ThreadData.hpp"

class Process {
public:
    static void create(std::unique_ptr<ThreadData> &data);
    static void startProcess(const std::list<std::string> &commandArg,
                             std::unique_ptr<ThreadData> &data);
};

#endif  // INCLUDE_PROCESS_HPP_
