#pragma once
#include <unordered_map>

namespace pi
{
    class TasksContainer
    {

            int current_size;

            short current_add_status;

            std::unordered_map<std::string, std::string> tasks;
        public:
            const short ADD_STATUS_NIL = -1;
            const short ADD_STATUS_OK = 0;

            TasksContainer();

            void add(char* date, char* task);

            inline short add_status() noexcept
            {
                return current_add_status;
            }

            inline int size() noexcept
            {
                return current_size;
            }
    };
};