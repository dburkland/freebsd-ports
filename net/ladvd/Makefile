# Created by: sten@blinkenlights.nl
# $FreeBSD$

PORTNAME=	ladvd
PORTVERSION=	1.1.0
DISTVERSIONPREFIX=v
CATEGORIES=	net

MAINTAINER=	sten@blinkenlights.nl
COMMENT=	Minimal LLDP/CDP/EDP/FDP/NDP sender daemon

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/doc/LICENSE

LIB_DEPENDS=	libevent.so:${PORTSDIR}/devel/libevent2

USERS=		ladvd
GROUPS=		${USERS}

USE_GITHUB=	yes
GH_ACCOUNT=	sspans
USES=		autoreconf libtool pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-chroot-dir=/var/empty

PORTDOCS=	README TODO HACKING
USE_RC_SUBR=	ladvd
SUB_FILES=	pkg-message

PLIST_FILES=	man/man8/ladvd.8.gz \
		man/man8/ladvdc.8.gz \
		sbin/ladvd \
		sbin/ladvdc

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

.if ${OSVERSION} < 1000000
CFLAGS_amd64=   -fPIC
.endif

post-patch:
	${REINPLACE_CMD} -e 's|LICENSE||' ${WRKSRC}/doc/Makefile.am

.include <bsd.port.mk>
