/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/XXUnknownSuperclass.h>

@class NSString, NSMutableDictionary;

@interface SSXPCServer : XXUnknownSuperclass {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSString *_entitlementName;	// 8 = 0x8
	xpc_connection_s *_listener;	// 12 = 0xc
	NSMutableDictionary *_observers;	// 16 = 0x10
}
+ (id)mainServer;	// 0x46b35
- (void)_dispatchMessage:(void *)message connection:(xpc_connection_s *)connection;	// 0x46fa5
- (void)removeObserver:(id)observer selector:(SEL)selector forMessage:(long long)message;	// 0x46de5
- (void)addObserver:(id)observer selector:(SEL)selector forMessage:(long long)message;	// 0x46bf5
- (void)dealloc;	// 0x46aa9
- (id)initWithServiceName:(id)serviceName entitlement:(id)entitlement queue:(dispatch_queue_s *)queue;	// 0x4668d
- (id)initWithServiceName:(id)serviceName;	// 0x4666d
- (id)init;	// 0x46659
@end
