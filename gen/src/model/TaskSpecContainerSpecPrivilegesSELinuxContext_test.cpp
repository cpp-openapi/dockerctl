#include "gtest/gtest.h"

#include "TaskSpecContainerSpecPrivilegesSELinuxContext.h"

TEST(TaskSpecContainerSpecPrivilegesSELinuxContext, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpecPrivilegesSELinuxContext x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}