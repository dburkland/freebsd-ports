# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD$

PORTNAME=	bugwarrior
PORTVERSION=	1.3.0
CATEGORIES=	deskutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Sync issue & bug tracking systems with taskwarrior

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}twiggy>0:${PORTSDIR}/devel/py-twiggy \
		${PYTHON_PKGNAMEPREFIX}requests>0:${PORTSDIR}/www/py-requests \
		${PYTHON_PKGNAMEPREFIX}taskw>=0.8:${PORTSDIR}/deskutils/py-taskw \
		${PYTHON_PKGNAMEPREFIX}dateutil>0:${PORTSDIR}/devel/py-dateutil \
		${PYTHON_PKGNAMEPREFIX}pytz>0:${PORTSDIR}/devel/py-pytz \
		${PYTHON_PKGNAMEPREFIX}keyring>0:${PORTSDIR}/security/py-keyring \
		${PYTHON_PKGNAMEPREFIX}six>0:${PORTSDIR}/devel/py-six \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=2.7.2:${PORTSDIR}/devel/py-Jinja2 \
		${PYTHON_PKGNAMEPREFIX}pycurl>0:${PORTSDIR}/ftp/py-pycurl \
		${PYTHON_PKGNAMEPREFIX}dogpile.cache>=0.5.3:${PORTSDIR}/devel/py-dogpile.cache \
		${PYTHON_PKGNAMEPREFIX}lockfile>=0.9.1:${PORTSDIR}/devel/py-lockfile \
		${PYTHON_PKGNAMEPREFIX}click>0:${PORTSDIR}/devel/py-click \
		${PYTHON_PKGNAMEPREFIX}xdg>0:${PORTSDIR}/devel/py-xdg
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>0:${PORTSDIR}/devel/py-mock \
		${PYTHON_PKGNAMEPREFIX}unittest2>0:${PORTSDIR}/devel/py-unittest2 \
		${PYTHON_PKGNAMEPREFIX}nose>0:${PORTSDIR}/devel/py-nose

OPTIONS_DEFINE=		BUGZILLA JIRA PHABRICATOR
OPTIONS_DEFAULT=	BUGZILLA PHABRICATOR

BUGZILLA_DESC=			Enable Bugzilla support
BUGZILLA_RUN_DEPENDS=		${PYTHON_PKGNAMEPREFIX}python-bugzilla>0:${PORTSDIR}/devel/py-python-bugzilla

JIRA_DESC=			Enabla Atlassian Jira support
JIRA_RUN_DEPENDS=		${PYTHON_PKGNAMEPREFIX}jira>0:${PORTSDIR}/devel/py-jira

PHABRICATOR_DESC=		Enable Phabricator support
PHABRICATOR_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}phabricator>0:${PORTSDIR}/devel/py-phabricator

TRAC_DESC=			Enable Trac support
TRAC_RUN_DEPENDS=		${PYTHON_PKGNAMEPREFIX}offtrac>0:${PORTSDIR}/devel/py-offtrac

USES=		python:-2.7
USE_PYTHON=	autoplist concurrent distutils

do-test:
	${RM} ${WRKSRC}/tests/test_activecollab.py # Needs pandoc
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
