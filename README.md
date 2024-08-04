# My Dactyl Manuform configuration.

## Building

```
$ git clone git@github.com:qmk/qmk_firmware
$ cd qmk_firmware
$ make git-submodule
$ git clone git@github.com:kthibodeaux/dactyl-layout.git \
            keyboards/handwired/dactyl_manuform/5x6/keymaps/kthibodeaux
$ ./util/docker_build.sh handwired/dactyl_manuform/5x6:kthibodeaux
```
