# $FreeBSD$

PORTNAME=	recog
PORTVERSION=	1.0.29
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Framework for fingerprinting products

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-nokogiri>=0:${PORTSDIR}/textproc/rubygem-nokogiri

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/recog_export \
		bin/recog_match \
		bin/recog_verify

PORTSCOUT=	ignore:1

.include <bsd.port.mk>
