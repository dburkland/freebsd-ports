# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	twitmail
PORTVERSION=	0.42
PORTREVISION=	1
CATEGORIES=	net-im perl5
MASTER_SITES=	http://www.hardakers.net/twitmail/releases/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Curses-based mail-like interface to Twitter

BROKEN=		unfetchable

BUILD_DEPENDS=	p5-DBD-SQLite>=1.12:${PORTSDIR}/databases/p5-DBD-SQLite \
		p5-DBI>=1.60.4:${PORTSDIR}/databases/p5-DBI \
		p5-Curses>=0:${PORTSDIR}/devel/p5-Curses \
		p5-Curses-UI>=0:${PORTSDIR}/devel/p5-Curses-UI \
		p5-Term-ReadKey>=2.10:${PORTSDIR}/devel/p5-Term-ReadKey \
		p5-Net-Twitter>=3.04002:${PORTSDIR}/net/p5-Net-Twitter \
		p5-TimeDate>=2.24:${PORTSDIR}/devel/p5-TimeDate \
		p5-Getopt-GUI-Long>=0.91:${PORTSDIR}/devel/p5-Getopt-GUI-Long

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
