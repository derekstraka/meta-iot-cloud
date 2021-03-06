SUMMARY = "Objects and routines pertaining to date and time"
AUTHOR = "Jason R. Coombs"
HOMEPAGE = "https://github.com/jaraco/tempora"
LICENSE = "CLOSED"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-six \
	${PYTHON_PN}-pytz \
"

PR = "r0"

SRC_URI = "git://github.com/jaraco/tempora.git"
SRCREV = "e59ee5c6340712f97852b9afa1035098e9b47b04"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
