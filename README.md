Cuda - Travelling Salesman Problem
=============


*Author:* Arthur Henrique Guimarães

Description
============

An attempt to solve the Travelling Salesman Problem using CUDA for the Parallel and Distributed Programming discipline
teached by Dr. Wellington Santos Martins.

Files
============


* *map_generator:* Generates an map that is used as the input to *ants.c* an *parallel_ants.cu*.

*structure:* from to distance

* *ants.c:* Sequencial algorithm to solve the travelling salesman problem.
* *parallel_ants.cu:* Parallel Algorithm to solve the tsp problem in GPU using cuda.

How to use
============

* Sequencial
- ruby map_generator
- gcc -lm ants.c -o ants.exe 
- ants.exe < map.txt

* Parallel
- ruby map_generator
- nvcc



Requirements
============

                    
