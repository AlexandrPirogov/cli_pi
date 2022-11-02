#include <gtest/gtest.h>
#include <memory>

TEST(TasksContainerTests, CreatingTasksContainer) {
    std::unique_ptr<pi::tasksContainer> taskContainer = std::make_unique<pi::tasksContainer>();
    ASSERT_EQ(taskContainer->size(), 0);
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}