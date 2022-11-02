#include <gtest/gtest.h>
#include "../taskContainer.h"
#include "../taskContainer.cpp"
#include <memory>

TEST(TasksContainerTests, CreatingTasksContainer) {
    std::unique_ptr<pi::TasksContainer> taskContainer = std::make_unique<pi::TasksContainer>();
    ASSERT_EQ(taskContainer->size(), 0);
}

TEST(TasksContainerTests, AddTaskInTaskContainer) {
    std::unique_ptr<pi::TasksContainer> taskContainer = std::make_unique<pi::TasksContainer>();
    ASSERT_EQ(taskContainer->add_status(), taskContainer->ADD_STATUS_NIL);
    taskContainer->add("2022-01-01", "Do Homework");
    ASSERT_EQ(taskContainer->size(), 1);
    ASSERT_EQ(taskContainer->add_status(), taskContainer->ADD_STATUS_OK);
}

TEST(TasksContainerTests, RetrieveTaskInTaskContainer) {
    std::unique_ptr<pi::TasksContainer> taskContainer = std::make_unique<pi::TasksContainer>();
    taskContainer->add("2022-01-01", "Do Homework");
    ASSERT_EQ(taskContainer->retrieveByDate("2022-01-01"), "Do Homework");
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}