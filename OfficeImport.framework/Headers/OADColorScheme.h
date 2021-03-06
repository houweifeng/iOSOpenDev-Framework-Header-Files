/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorScheme : XXUnknownSuperclass {
@private
	NSMutableDictionary *mColors;	// 4 = 0x4
}
- (id)init;	// 0xbd9cd
- (void)dealloc;	// 0x8d08d
- (unsigned)colorCount;	// 0x1a2265
- (id)colorForIndex:(int)index;	// 0x6e61
- (void)addColor:(id)color index:(int)index;	// 0xc1535
- (void)setColor:(id)color index:(int)index;	// 0x2a0209
- (void)addDefaultColors;	// 0x2a000d
- (BOOL)isEqual:(id)equal;	// 0x29ff9d
@end
