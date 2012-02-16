/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
	NSMutableSet *_propertiesToExpand;	// 128 = 0x80
}
@property(retain) NSMutableSet *propertiesToExpand;	// G=0x33ac1; S=0x33ad5; @synthesize=_propertiesToExpand
// declared property setter: - (void)setPropertiesToExpand:(id)expand;	// 0x33ad5
// declared property getter: - (id)propertiesToExpand;	// 0x33ac1
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33a7d
- (id)parseHints;	// 0x33765
- (id)requestBody;	// 0x33485
- (id)httpMethod;	// 0x33479
- (id)description;	// 0x333b5
- (void)addPropertyToExpandWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x33335
- (id)initWithPropertiesToFind:(id)find atURL:(id)url expandedName:(id)name expandedNameSpace:(id)space;	// 0x332a9
- (void)dealloc;	// 0x3325d
@end