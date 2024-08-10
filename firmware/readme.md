# fauxlice

![fauxlice](imgur.com image replace me!)

_A short description of the keyboard/project_

- Keyboard Maintainer: [brockar](https://github.com/brockar)
- Hardware Supported: _Arduino Pro micro 32U4_
- Hardware Availability: [Pro Micro](https://www.aliexpress.com/item/32888212119.html?spm=a2g0o.productlist.main.3.29f09l6I9l6IVu&algo_pvid=da638c9c-c142-47e2-bf8c-131e61f3c606&algo_exp_id=da638c9c-c142-47e2-bf8c-131e61f3c606-1&pdp_npi=4%40dis%21USD%214.32%213.50%21%21%214.32%213.50%21%402103080f17233088115137814e6b73%2112000029855280287%21sea%21AR%212118067180%21X&curPageLogUid=oi84iPzdVYtT&utparam-url=scene%3Asearch%7Cquery_from%3A), or

Make example for this keyboard (after setting up your build environment):

    make fauxlice:vial

Flashing example for this keyboard:

    make fauxlice:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

- **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
- **[Physical reset button](https://cdn.sparkfun.com/assets/6/d/3/4/a/523c8e23757b7fbe5f8b4584.png)**: Briefly press the button on the back of the PCB - some may have pads you must short instead
- **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
