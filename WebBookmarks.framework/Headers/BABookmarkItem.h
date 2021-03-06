/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <WebBookmarks/XXUnknownSuperclass.h>

@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : XXUnknownSuperclass {
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0xecc5; @synthesize=_collection
@property(retain, nonatomic) WebBookmark *bookmark;	// G=0xecb5; S=0xed55; @synthesize=_bookmark
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark;	// 0xecd5
- (void)dealloc;	// 0xed7d
// declared property getter: - (id)bookmark;	// 0xecb5
// declared property setter: - (void)setBookmark:(id)bookmark;	// 0xed55
// declared property getter: - (id)collection;	// 0xecc5
@end
