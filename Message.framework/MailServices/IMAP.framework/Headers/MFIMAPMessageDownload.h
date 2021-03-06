/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFIMAPCompoundDownload.h>

@class Message, MimePart;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {
	Message *_message;	// 16 = 0x10
	MimePart *_topLevelPart;	// 20 = 0x14
	unsigned _allowsPartialDownloads : 1;	// 24 = 0x18
	unsigned _usingPartialDownloads : 1;	// 24 = 0x18
	unsigned _startedFetch : 1;	// 24 = 0x18
	unsigned _fetchingMessageContents : 1;	// 24 = 0x18
	unsigned _fetchingBodyText : 1;	// 24 = 0x18
	unsigned _doneAddingSubdownloads : 1;	// 24 = 0x18
	unsigned _fetchBodyData : 1;	// 24 = 0x18
}
@property(assign) BOOL allowsPartialDownloads;	// G=0xe935; S=0xe949; converted property
@property(retain) MimePart *topLevelPart;	// G=0xe9b9; S=0xea19; converted property
@property(assign) BOOL fetchBodyData;	// G=0xe9a5; S=0xe985; converted property
@property(readonly, retain) Message *message;	// G=0xe925; converted property
- (void)dealloc;	// 0xecb9
- (id)initWithMessage:(id)message;	// 0xf5d5
// converted property getter: - (id)message;	// 0xe925
// converted property getter: - (BOOL)allowsPartialDownloads;	// 0xe935
// converted property setter: - (void)setAllowsPartialDownloads:(BOOL)downloads;	// 0xe949
- (BOOL)partial;	// 0xe971
// converted property getter: - (id)topLevelPart;	// 0xe9b9
// converted property setter: - (void)setTopLevelPart:(id)part;	// 0xea19
- (id)data;	// 0xefb5
- (BOOL)isComplete;	// 0xef51
- (void)handleFetchResult:(id)result;	// 0xea81
- (void)processResults;	// 0xeb41
- (void)addCommandsToPipeline:(id)pipeline withCache:(id)cache;	// 0xed19
// converted property setter: - (void)setFetchBodyData:(BOOL)data;	// 0xe985
// converted property getter: - (BOOL)fetchBodyData;	// 0xe9a5
@end
