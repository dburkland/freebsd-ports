# Created by: adamw
# $FreeBSD$

PORTNAME=	geoipupdate
PORTVERSION=	2.2.2
DISTVERSIONPREFIX=	v
CATEGORIES=	net geography

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	Fetch the latest copies of the paid GeoIP database

LICENSE=	GPLv2

LIB_DEPENDS=	libcurl.so:${PORTSDIR}/ftp/curl

USE_GITHUB=	yes
GH_ACCOUNT=	maxmind

USES=		libtool localbase pathfix autoreconf
PATHFIX_MAKEFILEIN=	Makefile.am
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
