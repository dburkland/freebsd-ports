# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD$

PORTNAME=	qnapi
PORTVERSION=	0.2.0
CATEGORIES=	polish multimedia

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Qt5 based subtitle downloader

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/doc/LICENSE

BUILD_DEPENDS=	libmaia>0:${PORTSDIR}/net/libmaia
RUN_DEPENDS=	7z:${PORTSDIR}/archivers/p7zip

USE_GITHUB=	yes

USES=		compiler:c++11-lib qmake
USE_QT5=	buildtools_build gui network widgets xml

CXXFLAGS+=	-I${LOCALBASE}/include/maia
QMAKE_ARGS=	LIBS=-lmaia

post-patch:
	@${REINPLACE_CMD} 's|/usr|${PREFIX}|; s|share/man|man|; /doc \\/d' \
		${WRKSRC}/qnapi.pro

post-install:
	(cd ${WRKSRC}/doc && ${INSTALL_DATA} qnapi-download.desktop \
		qnapi-scan.desktop ${STAGEDIR}${DESKTOPDIR})

.include <bsd.port.mk>
