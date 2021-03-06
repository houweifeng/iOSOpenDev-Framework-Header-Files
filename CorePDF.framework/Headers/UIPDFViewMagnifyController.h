/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CorePDF-Structs.h>


@class UIPDFMagnifiedView, UIPDFPageView, UIWindow;

@interface UIPDFViewMagnifyController : NSObject {
	CGPoint _magnifierPoint;	// 4 = 0x4
	CGPoint _touchPoint;	// 12 = 0xc
	float _loupeRadius;	// 20 = 0x14
	float _power;	// 24 = 0x18
	CGSize _magnifierSize;	// 28 = 0x1c
	BOOL _showingLoupe;	// 36 = 0x24
	UIPDFMagnifiedView *_magnifiedView;	// 40 = 0x28
	UIWindow *_textEffectsWindow;	// 44 = 0x2c
	UIPDFPageView *_pageView;	// 48 = 0x30
	float _magnification;	// 52 = 0x34
}
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x5bac5; S=0x5bad5; @synthesize=_pageView
@property(assign, nonatomic) float magnification;	// G=0x5baa5; S=0x5bab5; @synthesize=_magnification
- (id)init;	// 0x5bae5
- (void)setPosition:(CGPoint)position viewPoint:(CGPoint)point loupe:(BOOL)loupe;	// 0x5c9dd
- (CGImageRef)createBitMap:(CGRect)map source:(CGRect)source;	// 0x5c7a9
- (CGImageRef)createBackingImage;	// 0x5c581
- (CGPoint)transformPointToTSpace:(CGPoint)tspace transform:(CGAffineTransform *)transform;	// 0x5c479
- (void)setSelectionPath;	// 0x5c0b1
- (void)selectPower;	// 0x5bfb1
- (void)showGlass:(BOOL)glass size:(CGSize)size;	// 0x5bd8d
- (void)showLoupe;	// 0x5bd41
- (void)showMagnifier;	// 0x5bcf9
- (void)move;	// 0x5bbe5
- (void)hide;	// 0x5bb9d
// declared property getter: - (float)magnification;	// 0x5baa5
// declared property setter: - (void)setMagnification:(float)magnification;	// 0x5bab5
// declared property getter: - (id)pageView;	// 0x5bac5
// declared property setter: - (void)setPageView:(id)view;	// 0x5bad5
@end
