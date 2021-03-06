# Created by: Slaven Rezic <slaven@rezic.de>
# $FreeBSD$

PORTNAME=	merkaartor
PORTVERSION=	0.18.2
CATEGORIES=	astro

MAINTAINER=	dev2@heesakkers.info
COMMENT=	Openstreetmap mapping program

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgdal.so:${PORTSDIR}/graphics/gdal \
		libproj.so:${PORTSDIR}/graphics/proj \
		libquazip5.so:${PORTSDIR}/archivers/quazip-qt5 \
		libsqlite3.so:${PORTSDIR}/databases/sqlite3

USE_GITHUB=	yes
GH_ACCOUNT=	openstreetmap
GH_PROJECT=	${PORTNAME}
USES=		pkgconfig qmake
USE_LDCONFIG=	yes

QMAKE_ARGS=	SYSTEM_QUAZIP=1
USE_QT5=	buildtools_build \
		concurrent core gui imageformats network printsupport svg \
		webkit widgets xml

OPTIONS_DEFINE=	DEBUG GEOIMAGE NLS ZBAR
OPTIONS_DEFAULT=	GEOIMAGE

GEOIMAGE_DESC=	Enable geotagged images (needs exiv2)
GEOIMAGE_QMAKE_ON=	GEOIMAGE=1
GEOIMAGE_LIB_DEPENDS=	libexiv2.so:${PORTSDIR}/graphics/exiv2

ZBAR_DESC=	Read barcodes from walking papers (BROKEN)
ZBAR_QMAKE_ON=	ZBAR=1
ZBAR_LIB_DEPENDS=	libzbar.so:${PORTSDIR}/graphics/zbar
# graphics/zbar needs to be built with Qt support (and needs a Qt5 version)
ZBAR_BROKEN=	Does not build with option ZBAR selected

DEBUG_QMAKE_OFF=	NODEBUG=1 RELEASE=1

NLS_USE=	QT5=linguist_build

OPTIONS_SUB=	yes

pre-build-NLS-on:
	@cd ${WRKSRC}/translations && ${LRELEASE} ../src/src.pro

post-install-NLS-on:
	@${MKDIR} ${STAGEDIR}${DATADIR}/translations
	@(cd ${WRKSRC}/translations && ${COPYTREE_SHARE} "merkaartor_*.qm" \
		${STAGEDIR}${DATADIR}/translations)

.include <bsd.port.mk>
