/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>

@class NSString, WebView;

__attribute__((visibility("hidden")))
@interface WebInspectorWindowController : XXUnknownSuperclass {
@private
	WebView *_inspectedWebView;	// 4 = 0x4
	WebInspectorFrontendClient *_frontendClient;	// 8 = 0x8
	WebInspectorClient *_inspectorClient;	// 12 = 0xc
	BOOL _destroyingInspectorView;	// 16 = 0x10
	WebView *_webView;	// 20 = 0x14
	NSString *_title;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) WebView *webView;	// G=0x6680d; @synthesize=_webView
@property(retain, nonatomic) NSString *title;	// G=0x667fd; S=0x670a1; @synthesize=_title
@property(assign) WebInspectorClient *inspectorClient;	// G=0x667e9; S=0x667d9; converted property
- (id)init;	// 0x66e29
- (id)initWithInspectedWebView:(id)inspectedWebView;	// 0x67191
- (void)dealloc;	// 0x67131
- (void)setFrontendClient:(WebInspectorFrontendClient *)client;	// 0x667c9
// converted property setter: - (void)setInspectorClient:(WebInspectorClient *)client;	// 0x667d9
// converted property getter: - (WebInspectorClient *)inspectorClient;	// 0x667e9
- (void)destroyInspectorView:(bool)view;	// 0x670c9
- (void)showWindow:(id)window;	// 0x667f9
// declared property getter: - (id)title;	// 0x667fd
// declared property setter: - (void)setTitle:(id)title;	// 0x670a1
// declared property getter: - (id)webView;	// 0x6680d
@end