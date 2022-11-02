#include "taskContainer.h"

pi::TasksContainer::TasksContainer()
{
    current_size = 0;
    current_add_status = ADD_STATUS_NIL;
};

void pi::TasksContainer::add(char* date, char* task)
{
    std::string dateStr = std::string(date);
    std::string taskStr = std::string(task);
    tasks[dateStr] = taskStr;
    current_size++;
    current_add_status = ADD_STATUS_OK;
};