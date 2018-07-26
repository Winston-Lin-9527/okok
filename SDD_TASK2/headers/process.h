//
//  process.h
//  SDD_TASK2
//
//  Created by LIN, Winston on 20/7/18.
//  Copyright © 2018 LIN, Winston. All rights reserved.
//

#ifndef process_h
#define process_h

#include <vector>

class Process{
public:
    Process();
    ~Process();
    
    void setPid(int pid);
    
    int getPid()const;
    
    int queryPidLog(int index)const;
    
private:
    int _pid;

    std::vector<int> _pidLog;
};


#endif /* process_h */


// process id documentation
// 0 - debug mode, internal use only

// 1 - tetris gaming screen
// 2 - tetris lose screen
// 3 - main menu 