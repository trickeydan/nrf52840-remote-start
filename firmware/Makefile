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

# USB Modules
USEMODULE += usbus
USEMODULE += auto_init_usbus
# USEMODULE += usbus_cdc_ecm

# Networking modules
# USEMODULE += gnrc_netdev_default
# USEMODULE += auto_init_gnrc_netif
# USEMODULE += gnrc_icmpv6_error
# USEMODULE += gnrc_sixlowpan_border_router_default
# USEMODULE += gnrc_udp
# USEMODULE += gnrc_rpl
# USEMODULE += auto_init_gnrc_rpl
# USEMODULE += gnrc_icmpv6_echo

# Shell modules
USEMODULE += shell
USEMODULE += shell_commands
USEMODULE += ps

# Misc modules
USEMODULE += xtimer

# Set USB Information. Currently using non-unique.
USB_VID ?= 1bda 
USB_PID ?= 7D00

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

include $(RIOTBASE)/Makefile.include

CFLAGS += -DCONFIG_USB_VID=0x$(USB_VID)
CFLAGS += -DCONFIG_USB_PID=0x$(USB_PID)
