# Created by: rpsfa@rit.edu
# $FreeBSD$

PORTNAME=	simple_form
PORTVERSION=	3.2.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Forms made easy

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activemodel4>=4:${PORTSDIR}/databases/rubygem-activemodel4 \
		rubygem-actionpack4>=4:${PORTSDIR}/www/rubygem-actionpack4

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
