#include <iostream>
#include "semantic_analyzer.h"
#include "intermediate_generator.h"
#include "optimizer.h"

int main() {
    std::string filename = "sample.ysl";

    // Parse and analyze
    YAMLNode root = parseYAML(filename);
    if (!semanticCheck(root)) {
        std::cerr << "Semantic analysis failed.\n";
        return 1;
    }

    // Generate intermediate code
    IntermediateCode ic = generateIntermediateCode(root);

    // Optimize
    IntermediateCode optimized = optimizeIntermediateCode(ic);

    // Output final result
    std::cout << "\nFinal Optimized Intermediate Code:\n";
    optimized.print();

    return 0;
}
