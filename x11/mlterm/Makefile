# Created by: MANTANI Nobutaka <nobutaka@nobutaka.com>
# $FreeBSD$

PORTNAME=	mlterm
PORTVERSION=	3.6.1
CATEGORIES=	x11
MASTER_SITES=	SF/${PORTNAME}/01release/${PORTNAME}-${PORTVERSION}

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	Multilingual X11 terminal emulator

USES=		gettext libtool perl5 pkgconfig
USE_XORG=	sm xft
USE_GNOME=	gtk20 vte
USE_LDCONFIG=	yes
USE_PERL5=	build
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-gui=x11 --with-imagelib=gdk-pixbuf2 --enable-utmp \
		--enable-optimize-redrawing \
		--disable-iiimf --with-gtk=2.0
EXTERNAL_TOOLS=	mlclient,mlconfig,mlterm-menu,mlcc,w3mmlconfig,mlimgloader
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lintl
MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	CAIRO DOCS FRIBIDI IBUS M17NLIB REGIS SCIM SIXEL UIM
OPTIONS_SUB=	yes
CAIRO_DESC=	Use Cairo for type engine (experimental)
FRIBIDI_DESC=	Use Fribidi for BiDi rendering
IBUS_DESC=	IBUS support (experimental)
M17NLIB_DESC=	m17n library support (experimental)
REGIS_DESC=	ReGIS graphics support
SCIM_DESC=	SCIM support (experimental)
SIXEL_DESC=	Sixel graphics support
UIM_DESC=	uim support (experimental)

FRIBIDI_CONFIGURE_ENABLE=	fribidi
FRIBIDI_LIB_DEPENDS=	libfribidi.so:${PORTSDIR}/converters/fribidi

UIM_CONFIGURE_ENABLE=	uim
UIM_LIB_DEPENDS=	libuim.so:${PORTSDIR}/textproc/uim

M17NLIB_CONFIGURE_ENABLE=	m17nlib
M17NLIB_LIB_DEPENDS=	libm17n.so:${PORTSDIR}/devel/m17n-lib

SCIM_CONFIGURE_ENABLE=	scim
SCIM_LIB_DEPENDS=	libscim-1.0.so:${PORTSDIR}/textproc/scim

IBUS_CONFIGURE_ENABLE=	ibus
IBUS_LIB_DEPENDS=	libibus-1.0.so:${PORTSDIR}/textproc/ibus

CAIRO_LIB_DEPENDS=	libcairo.so:${PORTSDIR}/graphics/cairo
CAIRO_CONFIGURE_ON=	--with-type-engines="xcore,xft,cairo"
CAIRO_CONFIGURE_OFF=	--with-type-engines="xcore,xft"

SIXEL_CONFIGURE_ENABLE=	sixel

REGIS_LIB_DEPENDS=	libSDL.so:${PORTSDIR}/devel/sdl12 \
			libSDL_ttf.so:${PORTSDIR}/graphics/sdl_ttf \
			libfontconfig.so:${PORTSDIR}/x11-fonts/fontconfig

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MREGIS}
EXTERNAL_TOOLS+=,registobmp
.endif

CONFIGURE_ARGS+=--with-tools="${EXTERNAL_TOOLS}"

post-configure:
	@${REINPLACE_CMD} -e "s,@CGI_BIN@,${PREFIX}/libexec/w3mmlconfig," \
		${WRKSRC}/tool/w3mmlconfig/mlconfig.cgi
	@${REINPLACE_CMD} -e 's|kik_utmp_bsd|kik_utmp_utmper|' \
		${WRKSRC}/kiklib/src/Makefile

post-install:
	(cd ${WRKSRC}/tool/w3mmlconfig && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} \
		${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${INSTALL_TARGET})
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/ja/README.ja ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
