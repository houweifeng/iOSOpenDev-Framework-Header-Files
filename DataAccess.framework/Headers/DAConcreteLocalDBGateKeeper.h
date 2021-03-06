/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DALocalDBGateKeeper.h>

@class NSString, NSMutableDictionary;

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper {
	NSString *_buildVersion;	// 68 = 0x44
	NSMutableDictionary *_refreshingWaiters;	// 72 = 0x48
	NSMutableDictionary *_failedWaiters;	// 76 = 0x4c
	NSMutableDictionary *_restrictedWaiters;	// 80 = 0x50
}
- (id)stateString;	// 0x24355
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x242b5
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x23be9
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x23835
- (void)_sendAllClearNotifications;	// 0x23361
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x22fc9
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x2294d
- (void)_removeRestrictedWaitersFromAllQueues;	// 0x22659
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x22381
- (void)_decrementRefreshCountForWaiterID:(id)waiterID didFinish:(BOOL)finish;	// 0x221b9
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x21f15
- (void)setBookmarksLockHolder:(id)holder;	// 0x21e55
- (void)setNotesLockHolder:(id)holder;	// 0x21d95
- (void)setEventsLockHolder:(id)holder;	// 0x21cd5
- (void)setContactsLockHolder:(id)holder;	// 0x21c15
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x21a89
- (void)dealloc;	// 0x214e1
- (id)init;	// 0x21329
- (BOOL)babysitterEnabled;	// 0x212f9
- (void)_reloadBabysitterProperties;	// 0x20b45
@end
