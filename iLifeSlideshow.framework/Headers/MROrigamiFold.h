/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MRTransition.h>


@interface MROrigamiFold : XXUnknownSuperclass <MRTransition> {
	unsigned char mDirection;	// 4 = 0x4
	unsigned char mNumberOfFoldings;	// 5 = 0x5
	float mPixelUnit;	// 8 = 0x8
}
@property(assign) float pixelUnit;	// G=0x8eb35; S=0x8eb45; @synthesize=mPixelUnit
- (id)initWithAttributes:(id)attributes;	// 0x8eb55
- (void)renderAtTime:(double)time andSize:(CGSize)size withSourcePatchwork:(id)sourcePatchwork andTargetPatchwork:(id)patchwork;	// 0x8ec01
// declared property getter: - (float)pixelUnit;	// 0x8eb35
// declared property setter: - (void)setPixelUnit:(float)unit;	// 0x8eb45
@end
