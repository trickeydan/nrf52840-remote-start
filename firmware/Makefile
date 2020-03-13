# Name of Application
APPLICATION = remote-start 

# If no BOARD is found in the environment, use this default:
BOARD ?= nrf52840dongle 

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../RIOT

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
DEVELHELP ?= 1

# Set USB Information.
# Using RIOT-OS Test PID.
USB_VID ?= 1209 
USB_PID ?= 7D01

# Network Info
GNRC_NETIF_NUMOF := 2

# USB Modules
USEMODULE += usbus
USEMODULE += auto_init_usbus
USEMODULE += usbus_cdc_ecm

# Networking modules
USEMODULE += gnrc_netdev_default
USEMODULE += auto_init_gnrc_netif
USEMODULE += gnrc_icmpv6_error
USEMODULE += gnrc_sixlowpan_border_router_default
USEMODULE += gnrc_udp
USEMODULE += gnrc_rpl
USEMODULE += auto_init_gnrc_rpl
USEMODULE += gnrc_icmpv6_echo

# Shell modules
USEMODULE += shell
USEMODULE += shell_commands
USEMODULE += ps

# Misc modules
USEMODULE += xtimer

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

# USB Options
CFLAGS += -DCONFIG_USB_VID=0x$(USB_VID)
CFLAGS += -DCONFIG_USB_PID=0x$(USB_PID)

include $(RIOTBASE)/Makefile.include
