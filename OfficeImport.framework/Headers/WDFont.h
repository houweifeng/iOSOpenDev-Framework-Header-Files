/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFont : XXUnknownSuperclass <NSCopying> {
@private
	NSString *mName;	// 4 = 0x4
	NSString *mSecondName;	// 8 = 0x8
	int mFontFamily;	// 12 = 0xc
	int mCharacterSet;	// 16 = 0x10
	int mPitch;	// 20 = 0x14
}
@property(retain) id name;	// G=0x136fbd; S=0x28cbf9; converted property
@property(retain) id secondName;	// G=0x28cbb9; S=0x122b21; converted property
@property(assign) int fontFamily;	// G=0x28cbc9; S=0x11c025; converted property
@property(assign) int characterSet;	// G=0x28cbd9; S=0x11c035; converted property
@property(assign) int pitch;	// G=0x28cbe9; S=0x11c015; converted property
// converted property getter: - (id)name;	// 0x136fbd
// converted property setter: - (void)setName:(id)name;	// 0x28cbf9
// converted property getter: - (id)secondName;	// 0x28cbb9
// converted property setter: - (void)setSecondName:(id)name;	// 0x122b21
// converted property getter: - (int)fontFamily;	// 0x28cbc9
// converted property setter: - (void)setFontFamily:(int)family;	// 0x11c025
// converted property getter: - (int)characterSet;	// 0x28cbd9
// converted property setter: - (void)setCharacterSet:(int)set;	// 0x11c035
// converted property getter: - (int)pitch;	// 0x28cbe9
// converted property setter: - (void)setPitch:(int)pitch;	// 0x11c015
- (id)init;	// 0x28ce95
- (id)initWithName:(id)name;	// 0x11bf5d
- (void)dealloc;	// 0xa2785
- (id)copyWithZone:(NSZone *)zone;	// 0x28cc39
- (unsigned)hash;	// 0x28ce25
- (BOOL)isEqual:(id)equal;	// 0x28cced
@end
