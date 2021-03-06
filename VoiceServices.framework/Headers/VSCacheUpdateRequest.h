/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/XXUnknownSuperclass.h>

@class NSString;

@interface VSCacheUpdateRequest : XXUnknownSuperclass {
	NSString *_modelID;	// 4 = 0x4
	NSString *_classID;	// 8 = 0x8
}
- (id)initWithModelIdentifier:(id)modelIdentifier classIdentifier:(id)identifier;	// 0xb00d
- (void)dealloc;	// 0xafad
- (id)modelIdentifier;	// 0xa611
- (id)classIdentifier;	// 0xa621
- (id)coalescedRequest:(id)request;	// 0xaf11
- (id)description;	// 0xaea9
@end
