/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/XXUnknownSuperclass.h>

@class NSMutableArray;

@interface _MFMailboxUidEnumerator : XXUnknownSuperclass {
	NSMutableArray *_mailboxes;	// 4 = 0x4
	unsigned _index;	// 8 = 0x8
}
- (void)dealloc;	// 0x16f15
- (id)initWithMailbox:(id)mailbox;	// 0x12091
- (id)nextObject;	// 0x12221
@end
