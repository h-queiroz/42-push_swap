1. Receber números por ARGC/ARGV
    1. Validação mínima.
2. Disorder Metric
3. Aplicar algoritmo de devida complexidade, baseado no valor do Disorder Metric
    1. DM < 0.2         - Simple Algo
    2. 0.2 >= DM <= 0.5 - Medium Algo
    3. DM >= 0.5        - Complex Algo

## Possibilidades de Algoritmos
### Simple O(n²)
    - Insertion sort adaptation
    - Selection sort adaptation
    - Bubble sort adaptation
    - Simple min/max extraction methods
### Medium O(n√n)
    - Chunk-based sorting (divide into √n chunks)
    - Block-based partitioning methods
    - Bucket sort adaptations with √n buckets
    - Range-based sorting strategies
### Complex O(n log n)
    - Radix sort adaptation (LSD or MSD)
    - Merge sort adaptation using two stacks
    - Quick sort adaptation with stack partitioning
    - Heap sort adaptation
    - Binary indexed tree approaches
### Adaptative
Custom adaptive algorithm (learner’s design): Design an adaptive strategy that selects different internal methods depending on the measured disorder. You are not constrained to any specific named algorithm; the internal techniques are entirely up to you. However, your design must respect the following complexity targets per regime (in the Push_swap operation model)
