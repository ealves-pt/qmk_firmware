# Corne Keyboard (CRKBD)

* [Official Github](https://github.com/foostan/crkbd)

## Setup

You will need to copy or symlink this folder to the `$QMK_HOME/keyboards/crkbd/keymaps/`. You can find the
path by typing `qmk env | grep QMK_HOME`, in my case the path is `~/qmk_firmware`.

What I usually do is to symlink the folder to the keymaps folder:

```bash
ln -s $(pwd) ~/qmk_firmware/keyboards/crkbd/keymaps/$(whoami)
```

## Flashing

Simply run `qmk flash -kb crkbd -km $(whoami) -b dfu`.
