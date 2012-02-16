/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSAffineTransform, NSObject;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFTransform : XXUnknownSuperclass <NSCopying> {
@private
	NSAffineTransform *m_world;	// 4 = 0x4
	CGPoint m_windowOrg;	// 8 = 0x8
	CGPoint m_windowExt;	// 16 = 0x10
	CGPoint m_viewportOrg;	// 24 = 0x18
	CGPoint m_viewportExt;	// 32 = 0x20
	NSAffineTransform *m_combinedTransform;	// 40 = 0x28
	int m_mapMode;	// 44 = 0x2c
	NSObject<MFDeviceDriver> *m_deviceDriver;	// 48 = 0x30
}
- (id)initWithDriver:(id)driver;	// 0x963f1
- (void)dealloc;	// 0x91fa9
- (int)setWorldTransform:(const CGAffineTransform *)transform;	// 0x1ef361
- (int)modifyWorldTransform:(const CGAffineTransform *)transform :(int)arg2;	// 0x1c2d75
- (id)getWorldMatrix;	// 0x9c68d
- (void)setWorldMatrix:(id)matrix;	// 0x9c69d
- (BOOL)isUpsideDown;	// 0x2c85d1
- (int)setWindowExt:(int)ext :(int)arg2;	// 0x97c19
- (int)setViewportExt:(int)ext :(int)arg2;	// 0x97d45
- (int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x2c8529
- (int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x14b7e1
- (CGPoint)getWindowExtent;	// 0x9c709
- (CGPoint)getViewportExtent;	// 0x9c761
- (CGPoint)getWindowOrg;	// 0x9c6dd
- (CGPoint)getViewportOrg;	// 0x9c735
- (int)setMapMode:(int)mode;	// 0x97769
- (int)getMapMode;	// 0x9c7dd
- (int)setWindowOrg:(int)org :(int)arg2;	// 0x97895
- (int)setViewportOrg:(int)org :(int)arg2;	// 0x97cc9
- (void)setWindowOrg:(CGPoint)org;	// 0x9c6f5
- (void)setViewportOrg:(CGPoint)org;	// 0x9c74d
- (void)setWindowExt:(CGPoint)ext;	// 0x9c721
- (void)setViewportExt:(CGPoint)ext;	// 0x9c779
- (int)offsetWindowOrg:(int)org :(int)arg2;	// 0x2c84d9
- (int)offsetViewportOrg:(int)org :(int)arg2;	// 0x2c8489
- (id)getTransformMatrix;	// 0x9c78d
- (void)setTransformMatrix:(id)matrix;	// 0x9c79d
- (int)updateTransform;	// 0x978d1
- (CGPoint)DPtoLP:(CGPoint)lp;	// 0x2c83ed
- (CGPoint)LPtoDP:(CGPoint)dp;	// 0x2c83b5
- (id)copyWithZone:(NSZone *)zone;	// 0x9c489
@end