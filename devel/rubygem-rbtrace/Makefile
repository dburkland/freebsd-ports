# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD$

PORTNAME=	rbtrace
PORTVERSION=	0.4.8
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Shows method calls inside another ruby process in real time

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

xRUN_DEPENDS=	rubygem-ffi>=1.0.6:${PORTSDIR}/devel/rubygem-ffi \
		rubygem-msgpack>=0.4.3:${PORTSDIR}/devel/rubygem-msgpack \
		rubygem-trollop>=1.16.2:${PORTSDIR}/devel/rubygem-trollop

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/rbtrace \
		%%GEM_LIB_DIR%%/ext/src/msgpack-1.1.0/src/.libs/libmsgpack.la \
		%%GEM_LIB_DIR%%/ext/src/msgpack-1.1.0/src/.libs/libmsgpackc.la

.include <bsd.port.mk>
