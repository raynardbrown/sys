////////////////////////////////////////////////////////////////////////////////
//
// File: CommandLineOption.h
//
// Author: Raynard Brown
//
// Copyright (c) 2020 Raynard Brown
//
// All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef SYS_COMMANDLINEOPTION_H_
#define SYS_COMMANDLINEOPTION_H_

#include <string>

class CommandLineOption
{
  public:

    explicit CommandLineOption(const std::string& longOptionName);

    explicit CommandLineOption(char shortOptionName);

    ~CommandLineOption();
};
#endif /* SYS_COMMANDLINEOPTION_H_ */
