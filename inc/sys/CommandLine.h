////////////////////////////////////////////////////////////////////////////////
//
// File: CommandLine.h
//
// Author: Raynard Brown
//
// Copyright (c) 2020 Raynard Brown
//
// All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef SYS_COMMANDLINE_H_
#define SYS_COMMANDLINE_H_

class CommandLineOption;

class CommandLine
{
  public:

    CommandLine(int argc, char **argv);

    ~CommandLine();

    void registerCommandLineOption(CommandLineOption * opt);

    friend class UiApplication;
};
#endif /* SYS_COMMANDLINE_H_ */
