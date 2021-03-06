/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/XXUnknownSuperclass.h>

@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : XXUnknownSuperclass {
	NSLock *_lock;	// 4 = 0x4
	NSMutableArray *_updateRequestQueue;	// 8 = 0x8
	NSDictionary *_dataProviders;	// 12 = 0xc
	NSTimer *_flushTimer;	// 16 = 0x10
	BOOL _isListening;	// 20 = 0x14
}
+ (id)sharedListener;	// 0xa6b5
+ (id)sharedListenerIfExists;	// 0xa601
- (id)init;	// 0xa5fd
- (id)_initShared;	// 0xae09
- (void)dealloc;	// 0xa631
- (void)startListening;	// 0xaced
- (void)stopListening;	// 0xabdd
- (void)performUpdateForModelIdentifier:(id)modelIdentifier classIdentifier:(id)identifier;	// 0xab75
- (void)_spokenLanguageChanged:(id)changed;	// 0xab61
- (void)_enqueueRequest:(id)request;	// 0xa841
- (void)_flush;	// 0xa6e1
@end
