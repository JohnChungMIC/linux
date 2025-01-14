/* SPDX-License-Identifier: GPL-2.0-or-later */

#ifndef I2C_AST2600_GLOBAL_H
#define I2C_AST2600_GLOBAL_H

#include <linux/bits.h>

#define AST2600_I2CG_ISR			0x00
#define AST2600_I2CG_SLAVE_ISR		0x04
#define AST2600_I2CG_OWNER		0x08
#define AST2600_I2CG_CTRL		0x0C
#define AST2600_I2CG_CLK_DIV_CTRL	0x10

#define AST2600_I2CG_SLAVE_PKT_NAK	BIT(4)
#define AST2600_I2CG_M_S_SEPARATE_INTR	BIT(3)
#define AST2600_I2CG_CTRL_NEW_REG	BIT(2)
#define AST2600_I2CG_CTRL_NEW_CLK_DIV	BIT(1)

#endif /* I2C_AST2600_GLOBAL_H */
