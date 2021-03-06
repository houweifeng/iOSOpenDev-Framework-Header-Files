/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>


@interface GMMStreetViewViewpoint : XXUnknownSuperclass {
	BOOL _hasScene;	// 4 = 0x4
	int _scene;	// 8 = 0x8
	BOOL _hasPanningCount;	// 12 = 0xc
	int _panningCount;	// 16 = 0x10
	BOOL _hasZoomingCount;	// 20 = 0x14
	int _zoomingCount;	// 24 = 0x18
	BOOL _hasNavigationCount;	// 28 = 0x1c
	int _navigationCount;	// 32 = 0x20
}
@property(assign, nonatomic) int navigationCount;	// G=0x37c8d; S=0x37cb1; @synthesize=_navigationCount
@property(assign, nonatomic) BOOL hasNavigationCount;	// G=0x3812d; S=0x3813d; @synthesize=_hasNavigationCount
@property(assign, nonatomic) int zoomingCount;	// G=0x37c45; S=0x37c69; @synthesize=_zoomingCount
@property(assign, nonatomic) BOOL hasZoomingCount;	// G=0x3810d; S=0x3811d; @synthesize=_hasZoomingCount
@property(assign, nonatomic) int panningCount;	// G=0x37bfd; S=0x37c21; @synthesize=_panningCount
@property(assign, nonatomic) BOOL hasPanningCount;	// G=0x380ed; S=0x380fd; @synthesize=_hasPanningCount
@property(assign, nonatomic) int scene;	// G=0x37bb5; S=0x37bd9; @synthesize=_scene
@property(assign, nonatomic) BOOL hasScene;	// G=0x380cd; S=0x380dd; @synthesize=_hasScene
// declared property setter: - (void)setHasNavigationCount:(BOOL)count;	// 0x3813d
// declared property getter: - (BOOL)hasNavigationCount;	// 0x3812d
// declared property setter: - (void)setHasZoomingCount:(BOOL)count;	// 0x3811d
// declared property getter: - (BOOL)hasZoomingCount;	// 0x3810d
// declared property setter: - (void)setHasPanningCount:(BOOL)count;	// 0x380fd
// declared property getter: - (BOOL)hasPanningCount;	// 0x380ed
// declared property setter: - (void)setHasScene:(BOOL)scene;	// 0x380dd
// declared property getter: - (BOOL)hasScene;	// 0x380cd
- (void)writeTo:(id)to;	// 0x37ff5
- (BOOL)readFrom:(id)from;	// 0x37ecd
- (id)dictionaryRepresentation;	// 0x37d45
- (id)description;	// 0x37cd5
// declared property setter: - (void)setNavigationCount:(int)count;	// 0x37cb1
// declared property getter: - (int)navigationCount;	// 0x37c8d
// declared property setter: - (void)setZoomingCount:(int)count;	// 0x37c69
// declared property getter: - (int)zoomingCount;	// 0x37c45
// declared property setter: - (void)setPanningCount:(int)count;	// 0x37c21
// declared property getter: - (int)panningCount;	// 0x37bfd
// declared property setter: - (void)setScene:(int)scene;	// 0x37bd9
// declared property getter: - (int)scene;	// 0x37bb5
- (void)dealloc;	// 0x37b89
@end
