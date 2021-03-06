#
# VIA vab820 quad
#

IMAGE_FSTYPES_append_vab820-quad = " resinos-img"

# Customize resinos-img
RESIN_IMAGE_BOOTLOADER_vab820-quad = "u-boot-vab820"
RESIN_BOOT_PARTITION_FILES_vab820-quad = " \
    uImage-vab820-quad.bin:/uImage \
    uImage-imx6q-vab820.dtb:/imx6q-vab820.dtb \
"

IMAGE_CMD_resinos-img_append_vab820-quad () {
    # vab820-quad needs uboot written at a specific location
    dd if=${DEPLOY_DIR_IMAGE}/u-boot-${MACHINE}.imx of=${RESIN_RAW_IMG} conv=notrunc seek=2 bs=512
}
