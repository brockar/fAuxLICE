# fauxlice

- [fauxlice](#fauxlice)
  - [Get ready](#get-ready)
  - [Compile](#compile)
  - [Bootloader](#bootloader)
    - [Extras to Read](#extras-to-read)

## Get ready

Clone the [vial-qmk](https://github.com/vial-kb/vial-qmk/) repo, make a folder into it called `fauxlice` on `vial-qmk/keyboards/`and copy all from this folder to it.

Go with your terminal to `vial-qmk` folder and make the modifications that u want on `keyboards/fauxlice`.

## Compile

Compile (after setting up your build environment):

    make fauxlice:vial

Flashing example for this keyboard:

    make fauxlice:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools)
and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide)
for more information.
Brand new to QMK? Start with our [Complete wbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

- **Keycode in layout**: Press the key mapped to `QK_BOOT`
- **Bootmagic reset**: Hold down the key at (0,0) in the matrix
  (usually the top left key or Escape) and plug in the keyboard
- **[Physical reset button](https://cdn.sparkfun.com/assets/6/d/3/4/a/523c8e23757b7fbe5f8b4584.png)**:
  Briefly press the button on the back of the PCB
- some may have pads you must short instead

---

### Extras to Read

- [Vial: Less Memory](https://get.vial.today/docs/firmware-size.html)
- If you use QMK, consider checking out [pipx](https://github.com/pypa/pipx).
- If flashing on Linux, use:

```bash
    sudo path/to/qmk flash -kb fauxlice -km vial
```
