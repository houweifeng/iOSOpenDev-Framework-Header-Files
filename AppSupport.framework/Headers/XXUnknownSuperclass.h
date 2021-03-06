/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (AppSupportMessagingProxy)
- (id)pep_onMainThread;	// 0x14ea1
- (id)pep_onMainThreadIfNecessary;	// 0x14ed5
- (id)pep_onDetachedThread;	// 0x14f0d
- (id)pep_onThread:(id)thread immediateForMatchingThread:(BOOL)matchingThread;	// 0x14f25
- (id)pep_onThread:(id)thread;	// 0x15031
- (id)pep_afterDelay:(double)delay;	// 0x15049
- (id)pep_onOperationQueue:(id)queue;	// 0x150f1
- (id)pep_onOperationQueue:(id)queue priority:(int)priority;	// 0x15109
- (id)pep_getInvocation:(id *)invocation;	// 0x15215
@end

@interface XXUnknownSuperclass (NSStringXMLAdditions)
- (id)stringByEscapingXMLSpecialCharacters;	// 0x1e01d
@end
