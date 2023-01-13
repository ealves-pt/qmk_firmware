# lagom

* [Official Github](https://github.com/mohoyt/lagom)

## Setup

You will need to copy or symlink this folder to the `$QMK_HOME/keyboards`. You can find the
path by typing `qmk env | grep QMK_HOME`, in my case the path is `~/qmk_firmware`.

What I usually do is to symlink the folder to the keyboards folder:

```bash
ln -s $(pwd) ~/qmk_firmware/keyboards/lagom
```

## Flashing

Simply run `qmk flash -kb lagom -km default`.
