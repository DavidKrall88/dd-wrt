#
# Makefile for the linux kernel.
#

obj-pci-y	:=
obj-pci-n	:=

obj-pci-$(CONFIG_ARCH_IXDP4XX)		+= ixdp425-pci.o
obj-pci-$(CONFIG_MACH_AVILA)		+= avila-pci.o
obj-pci-$(CONFIG_MACH_IXDPG425)		+= ixdpg425-pci.o
obj-pci-$(CONFIG_ARCH_ADI_COYOTE)	+= coyote-pci.o
obj-pci-$(CONFIG_MACH_GTWX5715)		+= gtwx5715-pci.o
obj-pci-$(CONFIG_MACH_NSLU2)		+= nslu2-pci.o
obj-pci-$(CONFIG_MACH_NAS100D)		+= nas100d-pci.o
obj-pci-$(CONFIG_MACH_COMPEX)		+= ixdp425-pci.o
obj-pci-$(CONFIG_MACH_WRT300NV2)	+= wrt300nv2-pci.o
obj-pci-$(CONFIG_MACH_WG302V2)		+= wg302v2-pci.o
obj-pci-$(CONFIG_MACH_GATEWAY7001)	+= gateway7001-pci.o
obj-pci-$(CONFIG_MACH_PRONGHORNMETRO)	+= pronghornmetro-pci.o
obj-pci-$(CONFIG_MACH_DSMG600)		+= dsmg600-pci.o
obj-pci-$(CONFIG_MACH_GATEWAY7001)	+= gateway7001-pci.o
obj-pci-$(CONFIG_MACH_WG302V2)		+= wg302v2-pci.o
obj-pci-$(CONFIG_MACH_MI424WR)		+= mi424wr-pci.o

obj-y	+= common.o

obj-$(CONFIG_ARCH_IXDP4XX)	+= ixdp425-setup.o
obj-$(CONFIG_MACH_AVILA)	+= avila-setup.o
obj-$(CONFIG_MACH_IXDPG425)	+= coyote-setup.o
obj-$(CONFIG_ARCH_ADI_COYOTE)	+= coyote-setup.o
obj-$(CONFIG_MACH_GTWX5715)	+= gtwx5715-setup.o
obj-$(CONFIG_MACH_NSLU2)	+= nslu2-setup.o nslu2-power.o
obj-$(CONFIG_MACH_NAS100D)	+= nas100d-setup.o nas100d-power.o
obj-$(CONFIG_MACH_COMPEX)	+= compex-setup.o
obj-$(CONFIG_MACH_WRT300NV2)	+= wrt300nv2-setup.o
obj-$(CONFIG_MACH_GATEWAY7001)	+= gateway7001-setup.o
obj-$(CONFIG_MACH_PRONGHORNMETRO)	+= pronghornmetro-setup.o
obj-$(CONFIG_MACH_DSMG600)      += dsmg600-setup.o dsmg600-power.o
obj-$(CONFIG_MACH_GATEWAY7001)	+= gateway7001-setup.o
obj-$(CONFIG_MACH_WG302V2)	+= wg302v2-setup.o

obj-$(CONFIG_PCI)		+= $(obj-pci-$(CONFIG_PCI)) common-pci.o
