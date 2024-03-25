# SPDX-License-Identifier: GPL-2.0
dtb-y += exynos/exynos9820.dtb

dtbo-$(CONFIG_DTBO_beyondx) += \
 samsung/exynos9820-beyondx_kor_08.dtbo \
 samsung/exynos9820-beyondx_kor_06.dtbo \
 samsung/exynos9820-beyondx_kor_00.dtbo \
 samsung/exynos9820-beyondx_kor_03.dtbo \
 samsung/exynos9820-beyondx_kor_04.dtbo \
 samsung/exynos9820-beyondx_kor_07.dtbo \
 samsung/exynos9820-beyondx_kor_01.dtbo \
 samsung/exynos9820-beyondx_kor_02.dtbo \
 samsung/exynos9820-beyondx_kor_05.dtbo

dtbo-$(CONFIG_DTBO_beyond1lte) += \
 samsung/exynos9820-beyond1lte_eur_open_21.dtbo \
 samsung/exynos9820-beyond1lte_eur_open_17.dtbo \
 samsung/exynos9820-beyond1lte_eur_open_18.dtbo \
 samsung/exynos9820-beyond1lte_eur_open_26.dtbo \
 samsung/exynos9820-beyond1lte_eur_open_23.dtbo \
 samsung/exynos9820-beyond1lte_eur_open_22.dtbo \
 samsung/exynos9820-beyond1lte_eur_open_24.dtbo \
 samsung/exynos9820-beyond1lte_eur_open_20.dtbo \
 samsung/exynos9820-beyond1lte_eur_open_19.dtbo

dtbo-$(CONFIG_DTBO_beyond2lte) += \
 samsung/exynos9820-beyond2lte_eur_open_25.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_16.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_04.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_18.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_17.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_26.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_20.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_23.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_19.dtbo \
 samsung/exynos9820-beyond2lte_eur_open_24.dtbo

dtbo-$(CONFIG_DTBO_beyond0lte) += \
 samsung/exynos9820-beyond0lte_eur_open_25.dtbo \
 samsung/exynos9820-beyond0lte_eur_open_18.dtbo \
 samsung/exynos9820-beyond0lte_eur_open_24.dtbo \
 samsung/exynos9820-beyond0lte_eur_open_17.dtbo \
 samsung/exynos9820-beyond0lte_eur_open_19.dtbo \
 samsung/exynos9820-beyond0lte_eur_open_20.dtbo \
 samsung/exynos9820-beyond0lte_eur_open_22.dtbo

dtbo-$(CONFIG_DTBO_d1) += \
 samsung/exynos9820-d1_eur_open_18.dtbo \
 samsung/exynos9820-d1_eur_open_23.dtbo \
 samsung/exynos9820-d1_eur_open_19.dtbo \
 samsung/exynos9820-d1_eur_open_21.dtbo \
 samsung/exynos9820-d1_eur_open_22.dtbo

dtbo-$(CONFIG_DTBO_d2) += \
 samsung/exynos9820-d2_eur_open_02.dtbo \
 samsung/exynos9820-d2_eur_open_18.dtbo \
 samsung/exynos9820-d2_eur_open_22.dtbo \
 samsung/exynos9820-d2_eur_open_24.dtbo \
 samsung/exynos9820-d2_eur_open_23.dtbo \
 samsung/exynos9820-d2_eur_open_19.dtbo \
 samsung/exynos9820-d2_eur_open_21.dtbo \
 samsung/exynos9820-d2_eur_open_17.dtbo \
 samsung/exynos9820-d2_eur_open_16.dtbo \
 samsung/exynos9820-d2_eur_open_20.dtbo



targets += dtbs
DTB_LIST  := $(dtb-y) $(dtbo-y)
always    := $(DTB_LIST)

dtbs: $(addprefix $(obj)/, $(DTB_LIST))

clean-files := *.dtb*
