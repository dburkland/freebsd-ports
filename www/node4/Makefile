# Created by: Jin-Sih Lin <linpct@gmail.com>
# $FreeBSD$

PORTNAME=	node
PORTVERSION=	4.2.6
DISTVERSIONPREFIX=	v
CATEGORIES=	www
MASTER_SITES=	http://nodejs.org/dist/v${PORTVERSION}/
PKGNAMESUFFIX=	4

MAINTAINER=	linpct@gmail.com
COMMENT=	V8 JavaScript for client and server (4.x LTS)

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

OPTIONS_DEFINE=	DOCS

USES=		compiler execinfo gmake python:2
HAS_CONFIGURE=	yes
USE_LDCONFIG=	yes

CONFLICTS_INSTALL=	node-* node-0.[02-9][0-9]* node-devel-0.[0-9]* node010-[0-9]* node012-[0-9]* iojs-[0-9]*

ONLY_FOR_ARCHS=	i386 amd64
CONFIGURE_ARGS=	--prefix=${PREFIX_RELDEST} --without-npm --shared-zlib
PREFIX_RELDEST=	${PREFIX:S,^${DESTDIR},,}
REINPLACE_ARGS=	-i ''
MAKE_ENV+=	CC.host=${CC} CXX.host=${CXX} LINK.host=${CXX} LINK.target=${CXX}

.include <bsd.port.pre.mk>

.if ${COMPILER_TYPE} == clang
MAKE_ENV+=	LINK=clang++
CFLAGS+=	-Wno-unused-private-field
.if ${COMPILER_VERSION} >= 33
CFLAGS+=	-Wno-nested-anon-types -Wno-unused-function
.if ${COMPILER_VERSION} >= 34
CFLAGS+=	-Wno-unused-const-variable
.endif
.endif
.else
MAKE_ARGS+=	strictaliasing=off
USE_GCC=	yes
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' \
		${WRKSRC}/deps/v8/tools/gyp/v8.gyp
	@${REINPLACE_CMD} -e 's|/usr/bin/env python|${PYTHON_CMD}|' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e "s|python -c|${PYTHON_CMD} -c|" \
		${WRKSRC}/deps/v8/build/toolchain.gypi
	@${REINPLACE_CMD} -e "s|'python',|'${PYTHON_CMD}',|" \
		${WRKSRC}/tools/icu/icu-generic.gyp \
		${WRKSRC}/deps/v8/build/shim_headers.gypi \
		${WRKSRC}/deps/v8/tools/gyp/v8.gyp \
		${WRKSRC}/deps/v8/src/d8.gyp

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/node

.include <bsd.port.post.mk>
