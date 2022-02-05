#include "gtest/gtest.h"

#include "ManagerStatus.h"

TEST(ManagerStatus, Deserialize)
{
    // TODO: generate test content
    openapi::ManagerStatus x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}