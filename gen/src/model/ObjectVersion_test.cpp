#include "gtest/gtest.h"

#include "ObjectVersion.h"

TEST(ObjectVersion, Deserialize)
{
    // TODO: generate test content
    openapi::ObjectVersion x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}