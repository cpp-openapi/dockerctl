#include "gtest/gtest.h"

#include "TaskSpecContainerSpecPrivileges.h"

TEST(TaskSpecContainerSpecPrivileges, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpecPrivileges x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}