/* This package runs only the exact Europe Dr. Mario ROM. Hardware clocks:
 * https://www.nesdev.org/wiki/Cycle_reference_chart
 * PAL has 312 scanlines, 16/5 dots per CPU cycle and no odd-frame dot skip.
 * Keep game, sample and host clocks derived from the same master clock. */
#pragma once

#define PAL_MASTER_HZ        26601712.5
#define PAL_CPU_DIVIDER      16u
#define PAL_PPU_DIVIDER      5u
#define PAL_DOTS_PER_LINE    341u
#define PAL_LINES_PER_FRAME  312u
#define PAL_FRAME_DOTS       (PAL_DOTS_PER_LINE * PAL_LINES_PER_FRAME)
#define PAL_CPU_HZ           (PAL_MASTER_HZ / PAL_CPU_DIVIDER)
#define PAL_FRAME_SECONDS    (PAL_FRAME_DOTS * (double)PAL_PPU_DIVIDER / PAL_MASTER_HZ)
