# CMAKE COMPILER USAGE MINI_PROJ
## intro
### Goal of this proj
This is a mini proj based on cmake compiler, you can create yourself proj which use cmake as compiler tool based on this mini proj. 
### Directories intro 
+ include: all head files should be stored here according to it's first level subdirectory.
+ src: all source files should be stored here.
+ doc: all proj doc files should be stored here.
+ build: outter build directory.
+ bin: executable file will be generated here.
+ lib: dynamic or static lib will be generated here.

## Build proj
```
$> cd build
$> cmake ..
$> make
```

## Other characters
+ if you added a file or deleted a file from this proj, you need to clean proj and recompile this PROJ through command below:
```
$> ./build_clean.sh [your_proj_name]
$> cd build
$> cmake ..
$> make
```
+ if you modified a file, you just need to make again.
+ you need to modify CMakeFiles.txt in the proj root directory and src subdirectory according to your needs.
+ you need to modify build_clean.sh according to your proj.
