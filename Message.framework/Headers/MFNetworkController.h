/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Message-Structs.h>
#import <Message/XXUnknownSuperclass.h>

@class NSMutableSet, NSLock, NSThread, NSMutableArray;

@interface MFNetworkController : XXUnknownSuperclass {
	NSLock *_lock;	// 4 = 0x4
	CFRunLoopRef _rl;	// 8 = 0x8
	NSThread *_thread;	// 12 = 0xc
	NSMutableArray *_observers;	// 16 = 0x10
	SCNetworkReachabilityRef _reachability;	// 20 = 0x14
	unsigned _flags;	// 24 = 0x18
	SCDynamicStoreRef _store;	// 28 = 0x1c
	CFRunLoopSourceRef _store_source;	// 32 = 0x20
	BOOL _dns;	// 36 = 0x24
	CTServerConnectionRef _telephony;	// 40 = 0x28
	CFMachPortRef _port;	// 44 = 0x2c
	CFRunLoopSourceRef _port_source;	// 48 = 0x30
	NSMutableSet *_calls;	// 52 = 0x34
	int _interface;	// 56 = 0x38
	BOOL _data;	// 60 = 0x3c
}
+ (id)sharedInstance;	// 0x9eb9
+ (id)networkAssertionWithIdentifier:(id)identifier;	// 0x7609d
- (id)init;	// 0xa0fd
- (void)_setUpTelephony_nts;	// 0xa5dd
- (void)_tearDownTelephony_nts;	// 0x76499
- (void)dealloc;	// 0x76359
- (void)invalidate;	// 0x761bd
- (BOOL)_isNetworkUp_nts;	// 0xa5a9
- (BOOL)isNetworkUp;	// 0x11bad
- (BOOL)isFatPipe;	// 0x11d31
- (BOOL)isOnWWAN;	// 0x1cec1
- (BOOL)inAirplaneMode;	// 0x11b31
- (BOOL)inCallWithNoData;	// 0x11bfd
- (void)_setFlags:(unsigned)flags forReachability:(SCNetworkReachabilityRef)reachability;	// 0x75cb1
- (void)_checkKeys:(id)keys forStore:(SCDynamicStoreRef)store;	// 0xa41d
- (void)_setDataStatus_nts:(id)nts;	// 0xa89d
- (void)_handleNotification:(id)notification info:(id)info forConnection:(CTServerConnectionRef)connection;	// 0x119cd
- (void)_handleDeath_nts;	// 0x75d6d
- (void)_handleDeath:(CFMachPortRef)death;	// 0x75dc1
- (id)_networkAssertionWithIdentifier:(id)identifier;	// 0x760c9
- (id)addNetworkObserverBlock:(id)block queue:(dispatch_queue_s *)queue;	// 0xa979
- (void)removeNetworkObserver:(id)observer;	// 0x75ef1
@end
