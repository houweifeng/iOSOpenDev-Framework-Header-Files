/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/XXUnknownSuperclass.h>
#import <WebKit/WebKit-Structs.h>

@class WebScriptObject, WebScriptCallFrame;

__attribute__((visibility("hidden")))
@interface WebScriptCallFramePrivate : XXUnknownSuperclass {
@private
	WebScriptObject *globalObject;	// 4 = 0x4
	WebScriptCallFrame *caller;	// 8 = 0x8
	DebuggerCallFrame *debuggerCallFrame;	// 12 = 0xc
	WebScriptDebugger *debugger;	// 16 = 0x10
}
- (void)dealloc;	// 0x723ed
@end
