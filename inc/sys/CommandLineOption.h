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

    CommandLineOption(const std::string& longOptionName,
                      CommandLineOption * aliasOf);

    explicit CommandLineOption(char shortOptionName);

    ~CommandLineOption();

    std::string getLongName() const;

    char getShortName() const;

    CommandLineOption * getAliasOf() const;
};
#endif /* SYS_COMMANDLINEOPTION_H_ */
