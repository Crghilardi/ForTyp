# ForTyp

A C++ implementation of the [Arner et al. 2001](https://www.fs.fed.us/fmsc/ftp/fvs/docs/gtr/Arner2001.pdf) forest typing algorithm.

This library is largely translated from the FVS codebase ([stkval.f](https://sourceforge.net/p/open-fvs/code/HEAD/tree/trunk/vbase/stkval.f) and [fortyp.f](https://sourceforge.net/p/open-fvs/code/HEAD/tree/trunk/vbase/fortyp.f)) but also references the Arner documents.

Variable names were kept the same as the FVS FORTRAN code. There are a number of unused variables in the original code that are included but commented out.

## Functions

The library provides a function `forest_type(treelist, false)` which uses DBH, species (using FIA numeric codes), and TPA expansion values and returns the forest type classification. Due to some implementation details, there is a second `bool` parameter to simulate southern variant specific logic.

There are also convenience lookup tables to convert between forest type, forest type group, and their text names.

`fortyp_name()` returns the string name of a given forest type code
`fortypgroup()` returns the forest type group int of a given forest type
`fortypgroup_name()` returns the string name of a given forest type group code

If the forest type code is not found, it will just return a null string.

## Compilation Instructions
A shared library `libfortyp` can be built using `CMake` and supports out-of-source builds.

```shell
git clone

cd fortyp

mkdir build #or whatever you want to call it

cd build

cmake ..

make
```

## Demo

There is a small demo with some example data included in the `demo` folder. To compile the demo replace the `cmake` statement above with:

```shell
cmake -DBUILD_DEMO=ON ..
```

which can then be executed by running the `./demo_stocking` executable.

TO DO?:
1. generalize and clean up input structure
2. add some error handling to map lookups
3. cleaner way to handle variant logic?
4. add `python` / `R` interop examples

PRs/issues welcome