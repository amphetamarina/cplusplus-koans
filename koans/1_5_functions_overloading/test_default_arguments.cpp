#include <gtest/gtest.h>
#include "default_arguments.h"

// These tests explore how default arguments work
// Your goal: understand compile-time insertion and evaluation

TEST(DefaultArguments, DefaultSubstitution) {
    int result = test_default_substitution();
    EXPECT_EQ(result, 60)
        << "Default arguments are filled in at the call site";
}

TEST(DefaultArguments, RightmostOnly) {
    int result = test_rightmost_only();
    EXPECT_EQ(result, 36)
        << "Default arguments must be rightmost; you can't skip middle parameters";
}

TEST(DefaultArguments, DeclarationVsDefinition) {
    int result = test_declaration_vs_definition();
    EXPECT_EQ(result, 105)
        << "Default arguments can be specified in declaration or definition";
}

TEST(DefaultArguments, EvaluationTime) {
    int result = test_evaluation_time();
    EXPECT_EQ(result, 1029)
        << "Default argument expressions are evaluated at call time, not declaration time";
}

// Learning objectives:
// 1. Default arguments are substituted by the compiler at the call site
// 2. Default arguments must be rightmost in parameter list
// 3. You cannot skip middle parameters when calling
// 4. Defaults can be in declaration (header) or definition
// 5. Default expressions are evaluated at CALL time, not declaration time
// 6. This can lead to surprising behavior with side effects
// 7. Each call with a default re-evaluates the expression
