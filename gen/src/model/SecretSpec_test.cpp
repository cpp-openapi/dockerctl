#include "gtest/gtest.h"

#include "SecretSpec.h"

TEST(SecretSpec, Deserialize)
{
    // TODO: generate test content
    openapi::SecretSpec x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}