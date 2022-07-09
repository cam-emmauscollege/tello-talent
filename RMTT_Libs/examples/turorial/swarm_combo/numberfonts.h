/*
 * Copyright (C) 2020 DJI.
 *
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-08-25     robomaster   first version
 * 2021-06-15     robomaster   support TT swarm combo
 */

const uint8_t numberfonts[][128] =
{
    {
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
        255, 255,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    },
    {
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    },
    {
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    },
    {
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
        255, 255,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0,   0,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    },
    {
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    },
};

const uint8_t errorfonts[][128] =
{
    {0},
    {
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255,
        255, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,   0,   0,   0, 255, 255,
        255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    },
};