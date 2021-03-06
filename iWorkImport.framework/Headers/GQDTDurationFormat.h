/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>


__attribute__((visibility("hidden")))
@interface GQDTDurationFormat : XXUnknownSuperclass <GQDNameMappable> {
@private
	CFStringRef mFormatString;	// 4 = 0x4
}
+ (const StateSpec *)stateForReading;	// 0x57ea1
- (id)initWithFormatString:(CFStringRef)formatString;	// 0x57fa1
- (void)dealloc;	// 0x58029
- (CFStringRef)formatString;	// 0x57ead
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x57ff1
@end
