/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * linux/sound/soc/hisilicon/hi6210-i2s.h
 *
 * Copyright (C) 2015 Linaro, Ltd
 * Author: Andy Green <andy.green@linaro.org>
 *
 * Note at least on 6220, S2 == BT, S1 == Digital FM Radio IF
 */

#ifndef _HI6210_I2S_H
#define _HI6210_I2S_H

#define HII2S_SW_RST_N				0

#define HII2S_SW_RST_N__STEREO_UPLINK_WORDLEN_SHIFT			28
#define HII2S_SW_RST_N__STEREO_UPLINK_WORDLEN_MASK			3
#define HII2S_SW_RST_N__THIRDMD_UPLINK_WORDLEN_SHIFT			26
#define HII2S_SW_RST_N__THIRDMD_UPLINK_WORDLEN_MASK			3
#define HII2S_SW_RST_N__VOICE_UPLINK_WORDLEN_SHIFT			24
#define HII2S_SW_RST_N__VOICE_UPLINK_WORDLEN_MASK			3
#define HII2S_SW_RST_N__ST_DL_WORDLEN_SHIFT				20
#define HII2S_SW_RST_N__ST_DL_WORDLEN_MASK				3
#define HII2S_SW_RST_N__THIRDMD_DLINK_WORDLEN_SHIFT			18
#define HII2S_SW_RST_N__THIRDMD_DLINK_WORDLEN_MASK			3
#define HII2S_SW_RST_N__VOICE_DLINK_WORDLEN_SHIFT			16
#define HII2S_SW_RST_N__VOICE_DLINK_WORDLEN_MASK			3

#define HII2S_SW_RST_N__SW_RST_N					BIT(0)

enum hi6210_bits {
	HII2S_BITS_16,
	HII2S_BITS_18,
	HII2S_BITS_20,
	HII2S_BITS_24,
};


#define HII2S_IF_CLK_EN_CFG			4

#define HII2S_IF_CLK_EN_CFG__THIRDMD_UPLINK_EN				BIT(25)
#define HII2S_IF_CLK_EN_CFG__THIRDMD_DLINK_EN				BIT(24)
#define HII2S_IF_CLK_EN_CFG__S3_IF_CLK_EN				BIT(20)
#define HII2S_IF_CLK_EN_CFG__S2_IF_CLK_EN				BIT(16)
#define HII2S_IF_CLK_EN_CFG__S2_OL_MIXER_EN				BIT(15)
#define HII2S_IF_CLK_EN_CFG__S2_OL_SRC_EN				BIT(14)
#define HII2S_IF_CLK_EN_CFG__S2_IR_PGA_EN				BIT(13)
#define HII2S_IF_CLK_EN_CFG__S2_IL_PGA_EN				BIT(12)
#define HII2S_IF_CLK_EN_CFG__S1_IR_PGA_EN				BIT(10)
#define HII2S_IF_CLK_EN_CFG__S1_IL_PGA_EN				BIT(9)
#define HII2S_IF_CLK_EN_CFG__S1_IF_CLK_EN				BIT(8)
#define HII2S_IF_CLK_EN_CFG__VOICE_DLINK_SRC_EN				BIT(7)
#define HII2S_IF_CLK_EN_CFG__VOICE_DLINK_EN				BIT(6)
#define HII2S_IF_CLK_EN_CFG__ST_DL_R_EN					BIT(5)
#define HII2S_IF_CLK_EN_CFG__ST_DL_L_EN					BIT(4)
#define HII2S_IF_CLK_EN_CFG__VOICE_UPLINK_R_EN				BIT(3)
#define HII2S_IF_CLK_EN_CFG__VOICE_UPLINK_L_EN				BIT(2)
#define HII2S_IF_CLK_EN_CFG__STEREO_UPLINK_R_EN				BIT(1)
#define HII2S_IF_CLK_EN_CFG__STEREO_UPLINK_L_EN				BIT(0)

#define HII2S_DIG_FILTER_CLK_EN_CFG		8
#define HII2S_DIG_FILTER_CLK_EN_CFG__DACR_SDM_EN			BIT(30)
#define HII2S_DIG_FILTER_CLK_EN_CFG__DACR_HBF2I_EN			BIT(28)
#define HII2S_DIG_FILTER_CLK_EN_CFG__DACR_MIXER_EN			BIT(25)
#define HII2S_DIG_FILTER_CLK_EN_CFG__DACR_AGC_EN			BIT(24)
#define HII2S_DIG_FILTER_CLK_EN_CFG__DACL_SDM_EN			BIT(22)
#define HII2S_DIG_FILTER_CLK_EN_CFG__DACL_HBF2I_EN			BIT(20)
#define HII2S_DIG_FILTER_CLK_EN_CFG__DACL_MIXER_EN			BIT(17)
#define HII2S_DIG_FILTER_CLK_EN_CFG__DACL_AGC_EN			BIT(16)

#define HII2S_FS_CFG				0xc

#define HII2S_FS_CFG__FS_S2_SHIFT					28
#define HII2S_FS_CFG__FS_S2_MASK					7
#define HII2S_FS_CFG__FS_S1_SHIFT					24
#define HII2S_FS_CFG__FS_S1_MASK					7
#define HII2S_FS_CFG__FS_ADCLR_SHIFT					20
#define HII2S_FS_CFG__FS_ADCLR_MASK					7
#define HII2S_FS_CFG__FS_DACLR_SHIFT					16
#define HII2S_FS_CFG__FS_DACLR_MASK					7
#define HII2S_FS_CFG__FS_ST_DL_R_SHIFT					8
#define HII2S_FS_CFG__FS_ST_DL_R_MASK					7
#define HII2S_FS_CFG__FS_ST_DL_L_SHIFT					4
#define HII2S_FS_CFG__FS_ST_DL_L_MASK					7
#define HII2S_FS_CFG__FS_VOICE_DLINK_SHIFT				0
#define HII2S_FS_CFG__FS_VOICE_DLINK_MASK				7

enum hi6210_i2s_rates {
	HII2S_FS_RATE_8KHZ = 0,
	HII2S_FS_RATE_16KHZ = 1,
	HII2S_FS_RATE_32KHZ = 2,
	HII2S_FS_RATE_48KHZ = 4,
	HII2S_FS_RATE_96KHZ = 5,
	HII2S_FS_RATE_192KHZ = 6,
};

#define HII2S_I2S_CFG				0x10

#define HII2S_I2S_CFG__S2_IF_TX_EN					BIT(31)
#define HII2S_I2S_CFG__S2_IF_RX_EN					BIT(30)
#define HII2S_I2S_CFG__S2_FRAME_MODE					BIT(29)
#define HII2S_I2S_CFG__S2_MST_SLV					BIT(28)
#define HII2S_I2S_CFG__S2_LRCK_MODE					BIT(27)
#define HII2S_I2S_CFG__S2_CHNNL_MODE					BIT(26)
#define HII2S_I2S_CFG__S2_CODEC_IO_WORDLENGTH_SHIFT			24
#define HII2S_I2S_CFG__S2_CODEC_IO_WORDLENGTH_MASK			3
#define HII2S_I2S_CFG__S2_DIRECT_LOOP_SHIFT				22
#define HII2S_I2S_CFG__S2_DIRECT_LOOP_MASK				3
#define HII2S_I2S_CFG__S2_TX_CLK_SEL					BIT(21)
#define HII2S_I2S_CFG__S2_RX_CLK_SEL					BIT(20)
#define HII2S_I2S_CFG__S2_CODEC_DATA_FORMAT				BIT(19)
#define HII2S_I2S_CFG__S2_FUNC_MODE_SHIFT				16
#define HII2S_I2S_CFG__S2_FUNC_MODE_MASK				7
#define HII2S_I2S_CFG__S1_IF_TX_EN					BIT(15)
#define HII2S_I2S_CFG__S1_IF_RX_EN					BIT(14)
#define HII2S_I2S_CFG__S1_FRAME_MODE					BIT(13)
#define HII2S_I2S_CFG__S1_MST_SLV					BIT(12)
#define HII2S_I2S_CFG__S1_LRCK_MODE					BIT(11)
#define HII2S_I2S_CFG__S1_CHNNL_MODE					BIT(10)
#define HII2S_I2S_CFG__S1_CODEC_IO_WORDLENGTH_SHIFT			8
#define HII2S_I2S_CFG__S1_CODEC_IO_WORDLENGTH_MASK			3
#define HII2S_I2S_CFG__S1_DIRECT_LOOP_SHIFT				6
#define HII2S_I2S_CFG__S1_DIRECT_LOOP_MASK				3
#define HII2S_I2S_CFG__S1_TX_CLK_SEL					BIT(5)
#define HII2S_I2S_CFG__S1_RX_CLK_SEL					BIT(4)
#define HII2S_I2S_CFG__S1_CODEC_DATA_FORMAT				BIT(3)
#define HII2S_I2S_CFG__S1_FUNC_MODE_SHIFT				0
#define HII2S_I2S_CFG__S1_FUNC_MODE_MASK				7

enum hi6210_i2s_formats {
	HII2S_FORMAT_I2S,
	HII2S_FORMAT_PCM_STD,
	HII2S_FORMAT_PCM_USER,
	HII2S_FORMAT_LEFT_JUST,
	HII2S_FORMAT_RIGHT_JUST,
};

#define HII2S_DIG_FILTER_MODULE_CFG		0x14

#define HII2S_DIG_FILTER_MODULE_CFG__DACR_MIXER_GAIN_SHIFT		28
#define HII2S_DIG_FILTER_MODULE_CFG__DACR_MIXER_GAIN_MASK		3
#define HII2S_DIG_FILTER_MODULE_CFG__DACR_MIXER_IN4_MUTE		BIT(27)
#define HII2S_DIG_FILTER_MODULE_CFG__DACR_MIXER_IN3_MUTE		BIT(26)
#define HII2S_DIG_FILTER_MODULE_CFG__DACR_MIXER_IN2_MUTE		BIT(25)
#define HII2S_DIG_FILTER_MODULE_CFG__DACR_MIXER_IN1_MUTE		BIT(24)
#define HII2S_DIG_FILTER_MODULE_CFG__DACL_MIXER_GAIN_SHIFT		20
#define HII2S_DIG_FILTER_MODULE_CFG__DACL_MIXER_GAIN_MASK		3
#define HII2S_DIG_FILTER_MODULE_CFG__DACL_MIXER_IN4_MUTE		BIT(19)
#define HII2S_DIG_FILTER_MODULE_CFG__DACL_MIXER_IN3_MUTE		BIT(18)
#define HII2S_DIG_FILTER_MODULE_CFG__DACL_MIXER_IN2_MUTE		BIT(17)
#define HII2S_DIG_FILTER_MODULE_CFG__DACL_MIXER_IN1_MUTE		BIT(16)
#define HII2S_DIG_FILTER_MODULE_CFG__SW_DACR_SDM_DITHER			BIT(9)
#define HII2S_DIG_FILTER_MODULE_CFG__SW_DACL_SDM_DITHER			BIT(8)
#define HII2S_DIG_FILTER_MODULE_CFG__LM_CODEC_DAC2ADC_SHIFT		4
#define HII2S_DIG_FILTER_MODULE_CFG__LM_CODEC_DAC2ADC_MASK		7
#define HII2S_DIG_FILTER_MODULE_CFG__RM_CODEC_DAC2ADC_SHIFT		0
#define HII2S_DIG_FILTER_MODULE_CFG__RM_CODEC_DAC2ADC_MASK		7

enum hi6210_gains {
	HII2S_GAIN_100PC,
	HII2S_GAIN_50PC,
	HII2S_GAIN_25PC,
};

#define HII2S_MUX_TOP_MODULE_CFG		0x18

#define HII2S_MUX_TOP_MODULE_CFG__VOICE_DLINK_MIXER_GAIN_SHIFT		14
#define HII2S_MUX_TOP_MODULE_CFG__VOICE_DLINK_MIXER_GAIN_MASK		3
#define HII2S_MUX_TOP_MODULE_CFG__VOICE_DLINK_MIXER_IN2_MUTE		BIT(13)
#define HII2S_MUX_TOP_MODULE_CFG__VOICE_DLINK_MIXER_IN1_MUTE		BIT(12)
#define HII2S_MUX_TOP_MODULE_CFG__S2_OL_MIXER_GAIN_SHIFT		10
#define HII2S_MUX_TOP_MODULE_CFG__S2_OL_MIXER_GAIN_MASK			3
#define HII2S_MUX_TOP_MODULE_CFG__S2_OL_MIXER_IN2_MUTE			BIT(9)
#define HII2S_MUX_TOP_MODULE_CFG__S2_OL_MIXER_IN1_MUTE			BIT(8)
#define HII2S_MUX_TOP_MODULE_CFG__S2_OL_SRC_RDY				BIT(6)
#define HII2S_MUX_TOP_MODULE_CFG__S2_OL_SRC_MODE_SHIFT			4
#define HII2S_MUX_TOP_MODULE_CFG__S2_OL_SRC_MODE_MASK			3
#define HII2S_MUX_TOP_MODULE_CFG__VOICE_DLINK_SRC_RDY			BIT(3)
#define HII2S_MUX_TOP_MODULE_CFG__VOICE_DLINK_SRC_MODE_SHIFT		0
#define HII2S_MUX_TOP_MODULE_CFG__VOICE_DLINK_SRC_MODE_MASK		7

enum hi6210_s2_src_mode {
	HII2S_S2_SRC_MODE_3,
	HII2S_S2_SRC_MODE_12,
	HII2S_S2_SRC_MODE_6,
	HII2S_S2_SRC_MODE_2,
};

enum hi6210_voice_dlink_src_mode {
	HII2S_VOICE_DL_SRC_MODE_12 = 1,
	HII2S_VOICE_DL_SRC_MODE_6,
	HII2S_VOICE_DL_SRC_MODE_2,
	HII2S_VOICE_DL_SRC_MODE_3,
};

#define HII2S_ADC_PGA_CFG			0x1c
#define HII2S_S1_INPUT_PGA_CFG			0x20
#define HII2S_S2_INPUT_PGA_CFG			0x24
#define HII2S_ST_DL_PGA_CFG			0x28
#define HII2S_VOICE_SIDETONE_DLINK_PGA_CFG	0x2c
#define HII2S_APB_AFIFO_CFG_1			0x30
#define HII2S_APB_AFIFO_CFG_2			0x34
#define HII2S_ST_DL_FIFO_TH_CFG			0x38

#define HII2S_ST_DL_FIFO_TH_CFG__ST_DL_R_AEMPTY_SHIFT			24
#define HII2S_ST_DL_FIFO_TH_CFG__ST_DL_R_AEMPTY_MASK			0x1f
#define HII2S_ST_DL_FIFO_TH_CFG__ST_DL_R_AFULL_SHIFT			16
#define HII2S_ST_DL_FIFO_TH_CFG__ST_DL_R_AFULL_MASK			0x1f
#define HII2S_ST_DL_FIFO_TH_CFG__ST_DL_L_AEMPTY_SHIFT			8
#define HII2S_ST_DL_FIFO_TH_CFG__ST_DL_L_AEMPTY_MASK			0x1f
#define HII2S_ST_DL_FIFO_TH_CFG__ST_DL_L_AFULL_SHIFT			0
#define HII2S_ST_DL_FIFO_TH_CFG__ST_DL_L_AFULL_MASK			0x1f

#define HII2S_STEREO_UPLINK_FIFO_TH_CFG		0x3c
#define HII2S_VOICE_UPLINK_FIFO_TH_CFG		0x40
#define HII2S_CODEC_IRQ_MASK			0x44
#define HII2S_CODEC_IRQ				0x48
#define HII2S_DACL_AGC_CFG_1			0x4c
#define HII2S_DACL_AGC_CFG_2			0x50
#define HII2S_DACR_AGC_CFG_1			0x54
#define HII2S_DACR_AGC_CFG_2			0x58
#define HII2S_DMIC_SIF_CFG			0x5c
#define HII2S_MISC_CFG				0x60

#define HII2S_MISC_CFG__THIRDMD_DLINK_TEST_SEL				BIT(17)
#define HII2S_MISC_CFG__THIRDMD_DLINK_DIN_SEL				BIT(16)
#define HII2S_MISC_CFG__S3_DOUT_RIGHT_SEL				BIT(14)
#define HII2S_MISC_CFG__S3_DOUT_LEFT_SEL				BIT(13)
#define HII2S_MISC_CFG__S3_DIN_TEST_SEL					BIT(12)
#define HII2S_MISC_CFG__VOICE_DLINK_SRC_UP_DOUT_VLD_SEL			BIT(8)
#define HII2S_MISC_CFG__VOICE_DLINK_TEST_SEL				BIT(7)
#define HII2S_MISC_CFG__VOICE_DLINK_DIN_SEL				BIT(6)
#define HII2S_MISC_CFG__ST_DL_TEST_SEL					BIT(4)
#define HII2S_MISC_CFG__S2_DOUT_RIGHT_SEL				BIT(3)
#define HII2S_MISC_CFG__S2_DOUT_TEST_SEL				BIT(2)
#define HII2S_MISC_CFG__S1_DOUT_TEST_SEL				BIT(1)
#define HII2S_MISC_CFG__S2_DOUT_LEFT_SEL				BIT(0)

#define HII2S_S2_SRC_CFG			0x64
#define HII2S_MEM_CFG				0x68
#define HII2S_THIRDMD_PCM_PGA_CFG		0x6c
#define HII2S_THIRD_MODEM_FIFO_TH		0x70
#define HII2S_S3_ANTI_FREQ_JITTER_TX_INC_CNT	0x74
#define HII2S_S3_ANTI_FREQ_JITTER_TX_DEC_CNT	0x78
#define HII2S_S3_ANTI_FREQ_JITTER_RX_INC_CNT	0x7c
#define HII2S_S3_ANTI_FREQ_JITTER_RX_DEC_CNT	0x80
#define HII2S_ANTI_FREQ_JITTER_EN		0x84
#define HII2S_CLK_SEL				0x88

/* 0 = BT owns the i2s */
#define HII2S_CLK_SEL__I2S_BT_FM_SEL					BIT(0)
/* 0 = internal source, 1 = ext */
#define HII2S_CLK_SEL__EXT_12_288MHZ_SEL				BIT(1)


#define HII2S_THIRDMD_DLINK_CHANNEL		0xe8
#define HII2S_THIRDMD_ULINK_CHANNEL		0xec
#define HII2S_VOICE_DLINK_CHANNEL		0xf0

/* shovel data in here for playback */
#define HII2S_ST_DL_CHANNEL			0xf4
#define HII2S_STEREO_UPLINK_CHANNEL		0xf8
#define HII2S_VOICE_UPLINK_CHANNEL		0xfc

#endif/* _HI6210_I2S_H */
