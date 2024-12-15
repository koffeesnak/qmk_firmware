brew install armmbed/formulae/arm-none-eabi-gcc

git submodule update --init --recursive
#git submodule update --recursive --remote

make keebio/iris_ce/rev1:koffeesnak

qmk flash --keyboard keebio/iris_ce/rev1 --keymap koffeesnak