/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAMailboxRequest.h>

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
	NSString *_messageID;	// 8 = 0x8
	int _bodyFormat;	// 12 = 0xc
	int _maxSize;	// 16 = 0x10
}
@property(readonly, retain) NSString *messageID;	// G=0xd499; converted property
@property(readonly, assign) int bodyFormat;	// G=0xd4a9; converted property
@property(readonly, assign) int maxSize;	// G=0xd4b9; converted property
- (void)dealloc;	// 0xd6b1
- (id)description;	// 0xd629
- (BOOL)isEqual:(id)equal;	// 0xd565
- (unsigned)hash;	// 0xd4c9
// converted property getter: - (int)maxSize;	// 0xd4b9
// converted property getter: - (int)bodyFormat;	// 0xd4a9
// converted property getter: - (id)messageID;	// 0xd499
- (id)initRequestForBodyFormat:(int)bodyFormat withMessageID:(id)messageID withBodySizeLimit:(int)bodySizeLimit;	// 0xd409
@end
