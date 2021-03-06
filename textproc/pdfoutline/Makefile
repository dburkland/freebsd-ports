# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD$

PORTNAME=	pdfoutline
PORTVERSION=	3.2
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/fntsample/fntsample/${PORTVERSION}
DISTNAME=	fntsample-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Add outlines to PDF files

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	p5-Locale-libintl>=0:${PORTSDIR}/devel/p5-Locale-libintl \
		p5-PDF-API2>=0:${PORTSDIR}/textproc/p5-PDF-API2
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_BUILD=	yes
USE_PERL5=	run
USES=		perl5 pkgconfig shebangfix
SHEBANG_FILES=	pdfoutline.pl

PLIST_FILES=	bin/${PORTNAME} \
		man/man1/${PORTNAME}.1.gz

post-patch:
	@${SED} -e 's|##PACKAGE##|fntsample|g; s|##LOCALEDIR##|${PREFIX}/share/locale|g' ${WRKSRC}/${PORTNAME}.pl > ${WRKSRC}/${PORTNAME}
	@${SED} -e 's|@DATE@|2008-10-22|g' ${WRKSRC}/${PORTNAME}.1.in > ${WRKSRC}/${PORTNAME}.1

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/man/man1/

.include <bsd.port.mk>
