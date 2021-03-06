/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/XXUnknownSuperclass.h>

@class NSURL, NSDictionary;

__attribute__((visibility("hidden")))
@interface DDAction : XXUnknownSuperclass {
@private
	DDResult *_result;	// 4 = 0x4
	DDResult *_coalescedResult;	// 8 = 0x8
	CFArrayRef _associatedResults;	// 12 = 0xc
	NSDictionary *_context;	// 16 = 0x10
	NSURL *_url;	// 20 = 0x14
	BOOL _cachedCoalescedResult;	// 24 = 0x18
	BOOL _cachedAssociatedResults;	// 25 = 0x19
	BOOL _isDefaultAction;	// 26 = 0x1a
	id _delegate;	// 28 = 0x1c
}
@property(assign) id delegate;	// G=0xbbc5; S=0xbbd5; @synthesize=_delegate
@property(assign) BOOL isDefaultAction;	// G=0xbbe5; S=0xbbf5; @synthesize=_isDefaultAction
@property(readonly, assign) DDResult *coalescedResult;	// G=0xba21; converted property
@property(readonly, assign) CFArrayRef associatedResults;	// G=0xbacd; converted property
+ (id)defaultActionWithURL:(id)url result:(DDResult *)result context:(id)context;	// 0xb7c5
+ (id)actionWithURL:(id)url result:(DDResult *)result context:(id)context;	// 0xb77d
// declared property setter: - (void)setIsDefaultAction:(BOOL)action;	// 0xbbf5
// declared property getter: - (BOOL)isDefaultAction;	// 0xbbe5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xbbd5
// declared property getter: - (id)delegate;	// 0xbbc5
// converted property getter: - (CFArrayRef)associatedResults;	// 0xbacd
// converted property getter: - (DDResult *)coalescedResult;	// 0xba21
- (id)localizedName;	// 0xba09
- (void)_copyURL:(id)url;	// 0xb96d
- (void)_copyURL:(id)url andString:(id)string;	// 0xb8c9
- (void)perform;	// 0xb8a1
- (int)interactionType;	// 0xb89d
- (id)viewController;	// 0xb899
- (void)dealloc;	// 0xb7fd
- (id)initWithURL:(id)url result:(DDResult *)result context:(id)context;	// 0xb6d5
@end
