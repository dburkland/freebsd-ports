# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	nokogiri-diff
PORTVERSION=	0.2.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Calculate the differences between two XML/HTML documents

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-nokogiri>=1.5:${PORTSDIR}/textproc/rubygem-nokogiri \
		rubygem-tdiff>=0.3.2:${PORTSDIR}/devel/rubygem-tdiff

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
