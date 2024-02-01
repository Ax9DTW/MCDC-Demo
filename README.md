# LLVM MCDC Demo

Instructions are for MacOS

## Cloning

We need the preview version of llvm which has support for mcdc
```bash
git clone git@github.com:Ax9DTW/MCDC-Demo.git --recurse-submodules --shallow-submodules
```

## Build LLVM

The preview build of LLVM is added as a submodule, and needs to be built using the following command:
```bash 
./build_llvm
```

## Run Demo 
First move to the `cpp_mcdc` directory:

```bash
cd cpp_mcdc
```

### Build binary

```bash
./build
```

### Generate report

```bash
./coverage
```