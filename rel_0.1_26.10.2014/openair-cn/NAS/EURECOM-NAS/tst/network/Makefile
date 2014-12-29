################################################################################
#   OpenAirInterface
#   Copyright(c) 1999 - 2014 Eurecom
#
#    OpenAirInterface is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#
#    OpenAirInterface is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with OpenAirInterface.The full GNU General Public License is
#    included in this distribution in the file called "COPYING". If not,
#    see <http://www.gnu.org/licenses/>.
#
#  Contact Information
#  OpenAirInterface Admin: openair_admin@eurecom.fr
#  OpenAirInterface Tech : openair_tech@eurecom.fr
#  OpenAirInterface Dev  : openair4g-devel@eurecom.fr
#
#  Address      : Eurecom, Compus SophiaTech 450, route des chappes, 06451 Biot, France.
#
################################################################################
export PROCESS = MME

include ../../Makerules
include ../../Makefile.inc

PROJDIR	= $(PWD)/../..

export LD_RUN_PATH = $(LIBDIR):$(LIBPROCESS)

LIBS	 = -lutil -lapi -lEMMmsg -lESMmsg -lies -lrt -lnettle -lssl
INCLUDES = -I. -I$(SRCDIR) -I$(INCDIR) -I$(UTILDIR) \
	-I$(EMMMSGDIR) -I$(ESMMSGDIR) -I$(IESDIR)	\
	-I$(EMMDIR) -I$(APIDIR)/mme -I$(EMMDIR)/sap -I$(ESMDIR)/sap -I$(ESMDIR) -I$(OPENAIRCN_DIR)/SECU -I/usr/include/openssl -I/usr/include \
	-I$(OPENAIRCN_DIR)/COMMON -I$(OPENAIR_HOME)/common/utils -I$(OPENAIRCN_DIR)/UTILS -I$(OPENAIR_HOME)/common/utils/itti
TARGET = NetworkProcess

all: $(TARGET)

%.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@ $(OPENAIRCN_DIR)/SECU/*.o

$(TARGET): $(OBJS) $(OPENAIRCN_DIR)/SECU/*.o
	$(CC) -Wall -o $@ $^ $(LDFLAGS) -L/usr/local/lib $(LIBS) -I/usr/include/openssl -I/usr/include
	@$(CP) $@ $(BINDIR)

clean:
	$(RM) $(OBJS) *.bak *~

veryclean: clean
	$(RM) $(TARGET)

depend:
	makedepend -- ${CFLAGS} -- ${SRCS}

# DO NOT DELETE THIS LINE -- make depend depends on it.

