# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD$

PORTNAME=	avro
PORTVERSION=	1.7.3
CATEGORIES=	devel

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Data serialization system

LICENSE=	APACHE20

USES=		metaport

OPTIONS_DEFINE=	C CPP PYTHON
C_DESC=		Install ANSI C library
CPP_DESC=	Install C++ library
PYTHON_DESC=	Install Python library

OPTIONS_DEFAULT=C CPP PYTHON

C_LIB_DEPENDS=		libavro.so:${PORTSDIR}/devel/avro-c
CPP_LIB_DEPENDS=	libavrocpp.so:${PORTSDIR}/devel/avro-cpp
PYTHON_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}avro:${PORTSDIR}/devel/py-avro

.include <bsd.port.mk>
