/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <DADaemonSupport/XXUnknownSuperclass.h>
#import <DADaemonSupport/DADaemonSupport-Structs.h>


@interface DADAccessManager : XXUnknownSuperclass {
	xpc_connection_s *_mainConnection;	// 8 = 0x8
}
+ (id)sharedManager;	// 0x2069
- (void)dealloc;	// 0x213d
- (id)_init;	// 0x2025
- (id)init;	// 0x1fcd
- (void)_setupServerConnection;	// 0x1ce5
@end
