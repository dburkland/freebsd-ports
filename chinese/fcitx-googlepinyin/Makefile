# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD$

PORTNAME=	fcitx-googlepinyin
PORTVERSION=	0.1.6
CATEGORIES=	chinese
MASTER_SITES=	GOOGLE_CODE
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Libgooglepinyin support for Fcitx

LICENSE=	GPLv3

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libgooglepinyin.so:${PORTSDIR}/chinese/libgooglepinyin

USES=		tar:xz cmake gettext pkgconfig iconv
USE_GNOME=	intltool
INSTALLS_ICONS=	yes

PROJECTHOST=	fcitx

.include <bsd.port.mk>
