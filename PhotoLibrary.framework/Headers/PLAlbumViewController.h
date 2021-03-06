/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PLAlbumViewDataSource.h>
#import <PhotoLibrary/PLAlbumViewDelegate.h>
#import <PhotoLibrary/PLAlbumChangeObserver.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PLAlbumViewController.h>

@class PLAlbumView, PLEmptyAlbumView, NSObject;
@protocol PLAssetContainer;

@interface PLAlbumViewController : XXUnknownSuperclass <PLAlbumViewDataSource, PLAlbumViewDelegate, PLAlbumChangeObserver> {
	NSObject *_album;	// 152 = 0x98
	PLEmptyAlbumView *_emptyAlbumView;	// 156 = 0x9c
	int _currentFilter;	// 160 = 0xa0
	BOOL _shouldReloadWhenBecomingVisible;	// 164 = 0xa4
@private
	id viewDidAppearCompletion;	// 168 = 0xa8
}
@property(copy, nonatomic) id viewDidAppearCompletion;	// G=0xe115; S=0x9b11; @synthesize
@property(assign, nonatomic, getter=isShowingEmptyAlbumView) BOOL showingEmptyAlbumView;	// G=0xc1e1; S=0xc1f9; 
@property(readonly, assign, nonatomic) PLAlbumView *albumView;	// G=0x9b5d; 
@property(assign, nonatomic) int currentFilter;	// G=0xaa6e5; S=0xa9de9; @synthesize=_currentFilter
@property(readonly, assign, nonatomic) NSObject<PLAssetContainer> *album;	// G=0xf1b1; 
// declared property getter: - (int)currentFilter;	// 0xaa6e5
// declared property setter: - (void)setViewDidAppearCompletion:(id)appearCompletion;	// 0x9b11
// declared property getter: - (id)viewDidAppearCompletion;	// 0xe115
- (void)albumViewPreheatImageData:(id)data forImagesInRange:(NSRange)range;	// 0xc771
- (id)albumView:(id)view textBadgeForPhotoAtIndex:(unsigned)index;	// 0x2e6e1
- (void)albumView:(id)view imageCount:(unsigned *)count videoCount:(unsigned *)count3 otherCount:(unsigned *)count4 pendingCount:(unsigned *)count5 importOperation:(int *)operation;	// 0xaa615
- (id)albumView:(id)view imageDataForPhotoAtIndex:(unsigned)index imageWidth:(int *)width imageHeight:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width6 dataHeight:(int *)height7 imageDataOffset:(int *)offset;	// 0xdb45
- (unsigned)numberOfPhotosForAlbumView:(id)albumView;	// 0xc449
- (void)albumDidChange:(id)album;	// 0xaa101
- (void)libraryDidChange:(id)library;	// 0xaa095
- (void)beginAddPhotosSession:(id)session;	// 0xa9e81
- (unsigned)filteredCount;	// 0xba39
- (id)filteredItems;	// 0xdbc9
// declared property setter: - (void)setCurrentFilter:(int)filter;	// 0xa9de9
// declared property getter: - (id)albumView;	// 0x9b5d
- (id)contentScrollView;	// 0x9b35
// declared property getter: - (BOOL)isShowingEmptyAlbumView;	// 0xc1e1
// declared property setter: - (void)setShowingEmptyAlbumView:(BOOL)view;	// 0xc1f9
// declared property getter: - (NSObject *)album;	// 0xf1b1
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xa9d51
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xa9cf5
- (void)viewDidAppear:(BOOL)view;	// 0xe0c5
- (void)viewWillAppear:(BOOL)view;	// 0xbf39
- (void)loadView;	// 0x9b6d
- (void)reloadData;	// 0xa9ccd
- (void)invalidateFilteredItems;	// 0xc165
- (void)dealloc;	// 0x2f199
- (id)initWithAlbum:(NSObject *)album;	// 0x9831
- (id)init;	// 0x9865
@end

@interface PLAlbumViewController (Private)
- (void)setAlbum:(NSObject *)album;	// 0x98bd
@end
