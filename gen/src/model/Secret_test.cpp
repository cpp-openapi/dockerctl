#include "gtest/gtest.h"

#include "Secret.h"

TEST(Secret, Deserialize)
{
    // TODO: generate test content
    openapi::Secret x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}