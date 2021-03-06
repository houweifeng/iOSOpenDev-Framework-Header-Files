/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/XXUnknownSuperclass.h>

@class IMTimer, FTCConnectionHandler;

@interface CKDowngradeServer : XXUnknownSuperclass {
	IMTimer *_nextDowngradeCheckTimer;	// 4 = 0x4
	BOOL _ignoreConversationChangeNotifications;	// 8 = 0x8
	FTCConnectionHandler *_connectionHandler;	// 12 = 0xc
}
+ (id)sharedDowngradeServer;	// 0x778a1
- (id)init;	// 0x777c1
- (void)dealloc;	// 0x78ebd
- (void)_setActive:(BOOL)active;	// 0x78d2d
- (void)_setActiveIfNecessary;	// 0x78d09
- (void)start;	// 0x78c85
- (void)stop;	// 0x78c29
- (void)_handleSendAsSMSSettingChanged:(id)changed;	// 0x78bfd
- (void)_handleMessageSent:(id)sent;	// 0x78bd1
- (BOOL)__messageHasDowngradeMarkers:(id)markers;	// 0x78af1
- (double)_lowerDowngradeIntervalForMessage:(id)message;	// 0x78981
- (double)_upperDowngradeInterval;	// 0x788ed
- (id)_copyUndeliveredMessages;	// 0x78875
- (void)_scheduleTimerCheck;	// 0x78809
- (void)_timerFired;	// 0x787a5
- (void)_setupTimerIfNecessary;	// 0x784f5
- (BOOL)_shouldSendMessageAsSMS:(id)sms;	// 0x7843d
- (BOOL)_shouldIgnoreMessageDueToAge:(id)age;	// 0x783b5
- (BOOL)_shouldIgnoreMessageDueToContent:(id)content;	// 0x78341
- (void)_sendMessageAsSMS:(id)sms;	// 0x77b0d
- (void)_resendMessagesAsSMSIfNecessary:(id)necessary;	// 0x77945
- (void)_resendMessagesAsSMSIfNecessary;	// 0x77901
- (void)_handleDaemonConnected:(id)connected;	// 0x778f1
@end
