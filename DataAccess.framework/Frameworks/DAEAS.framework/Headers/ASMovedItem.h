/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASMovedItem : ASItem {
	NSString *_srcMsgId;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_dstMsgId;	// 48 = 0x30
}
@property(retain) NSString *dstMsgId;	// G=0x4f975; S=0x4f9ad; converted property
@property(retain) NSNumber *status;	// G=0x4f8f9; S=0x4f931; converted property
@property(retain) NSString *srcMsgId;	// G=0x4f87d; S=0x4f8b5; converted property
+ (BOOL)notifyOfUnknownTokens;	// 0x4f5a1
+ (BOOL)frontingBasicTypes;	// 0x4f54d
+ (BOOL)parsingWithSubItems;	// 0x4f4f9
+ (BOOL)parsingLeafNode;	// 0x4f4a5
+ (BOOL)acceptsTopLevelLeaves;	// 0x4f451
// converted property setter: - (void)setDstMsgId:(id)anId;	// 0x4f9ad
// converted property getter: - (id)dstMsgId;	// 0x4f975
// converted property setter: - (void)setStatus:(id)status;	// 0x4f931
// converted property getter: - (id)status;	// 0x4f8f9
// converted property setter: - (void)setSrcMsgId:(id)anId;	// 0x4f8b5
// converted property getter: - (id)srcMsgId;	// 0x4f87d
- (id)asParseRules;	// 0x4f669
- (void)dealloc;	// 0x4f5f5
@end